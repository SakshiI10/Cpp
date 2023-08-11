#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // Constructor to initialize data and next pointer
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};
void linkedListTraversal(Node *ptr)
{
    cout << "Element: ";
    while (ptr != nullptr)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}
void insertAtFront(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}
void insertAfterNode(Node *prevNode, int value)
{
    if (prevNode == nullptr)
    {
        cout << "Previous node cannot be nullptr." << endl;
        return;
    }
    Node *newNode = new Node(value);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}
void insertAtEnd(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    Node *current = head;
    while (current->next != nullptr)
    {
        current = current->next;
    }
    current->next = newNode;
}
int main()
{
    Node *head = nullptr;
    Node *second = nullptr;
    Node *third = nullptr;
    Node *fourth = nullptr;

    // Allocate memory for nodes in the linked list on the heap
    head = new Node(7);
    second = new Node(11);
    third = new Node(41);
    fourth = new Node(66);

    // Link the nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = nullptr;

    // Display the original linked list
    linkedListTraversal(head);

    // Insert a new node at the front
    insertAtFront(head, 99);
    linkedListTraversal(head);

    // Insert a new node after the second node
    insertAfterNode(second, 55);
    linkedListTraversal(head);

    // Insert a new node at the end
    insertAtEnd(head, 88);
    linkedListTraversal(head);

    // Free memory allocated for nodes in the linked list
    delete head;
    delete second;
    delete third;
    delete fourth;

    return 0;
}
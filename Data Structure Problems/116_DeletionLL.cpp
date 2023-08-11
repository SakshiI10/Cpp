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
void deleteAtFront(Node* &head) {
    if (head == nullptr) {
        cout << "List is already empty." << endl;
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}
void deleteAfterNode(Node* prevNode) {
    if (prevNode == nullptr || prevNode->next == nullptr) {
        cout << "Cannot delete. Previous node is nullptr or last node." << endl;
        return;
    }

    Node* temp = prevNode->next;
    prevNode->next = temp->next;
    delete temp;
}
void deleteAtEnd(Node* &head) {
    if (head == nullptr) {
        cout << "List is already empty." << endl;
        return;
    }

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    Node* current = head;
    while (current->next->next != nullptr) {
        current = current->next;
    }

    delete current->next;
    current->next = nullptr;
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
    deleteAtFront(head);
    linkedListTraversal(head);

    // Insert a new node after the second node
    deleteAfterNode(second);
    linkedListTraversal(head);

    // Insert a new node at the end
    deleteAtEnd(head);
    linkedListTraversal(head);

    // Free memory allocated for nodes in the linked list
    delete head;
    delete second;
    delete third;
    delete fourth;

    return 0;
}
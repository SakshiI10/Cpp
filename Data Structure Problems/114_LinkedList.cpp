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

    linkedListTraversal(head);

    // Free memory allocated for nodes in the linked list
    delete head;
    delete second;
    delete third;
    delete fourth;

    return 0;
}
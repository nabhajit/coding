#include <iostream>

struct Node
{
    int data;
    Node* link;
};

void traversal(Node* temp)
{
    while (temp != nullptr)
    {
        std::cout << temp->data << " ";
        temp = temp->link;
    }
    std::cout << std::endl;
}

Node* insertbegin(Node* head, int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->link = head;
    return temp; // Update the head to the new node
}

Node* insertindex(Node* head, int data, int index)
{
    Node* temp = new Node;
    temp->data = data;

    if (index == 0)
    {
        temp->link = head;
        return temp;
    }

    Node* p = head;
    int i = 0;

    while (i < index - 1 && p != nullptr)
    {
        p = p->link;
        i++;
    }

    if (p == nullptr) // Insert at the end if index is out of bounds
    {
        delete temp;
        return head;
    }

    temp->link = p->link;
    p->link = temp;
    return head;
}

Node* insertend(Node* head, int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->link = nullptr;

    if (head == nullptr) // If the list is empty
    {
        return temp;
    }

    Node* p = head;

    while (p->link != nullptr)
    {
        p = p->link;
    }

    p->link = temp;
    return head;
}

Node* reverse(Node* head)
{
    if (head == nullptr || head->link == nullptr)
    {
        return head;
    }
    else
    {
        Node* newhead = reverse(head->link);
        head->link->link = head;
        head->link = nullptr;
        return newhead;
    }
}

int main()
{
    Node* head = nullptr; // Initialize head to nullptr
    Node* second = nullptr;
    Node* third = nullptr;
    Node* fourth = nullptr;

    head = new Node;
    second = new Node;
    third = new Node;
    fourth = new Node;

    head->data = 10;
    head->link = second;

    second->data = 20;
    second->link = third;

    third->data = 30;
    third->link = fourth;

    fourth->data = 40;
    fourth->link = nullptr;

    // Print the original list
    std::cout << "Original List: ";
    traversal(head);

    // Insert at the beginning
    head = insertbegin(head, 5);

    // Print the list after insertion at the beginning
    std::cout << "List after insertion at the beginning: ";
    traversal(head);

    // Insert at a specific index
    head = insertindex(head, 25, 2);

    // Print the list after insertion at a specific index
    std::cout << "List after insertion at index 2: ";
    traversal(head);

    // Insert at the end
    head = insertend(head, 50);

    // Print the list after insertion at the end
    std::cout << "List after insertion at the end: ";
    traversal(head);

    // Reverse the list
    Node* newhead = reverse(head);

    // Print the reversed list
    std::cout << "Reversed List: ";
    traversal(newhead);

    // Clean up allocated memory
    Node* current = newhead;
    while (current != nullptr)
    {
        Node* next = current->link;
        delete current;
        current = next;
    }

    return 0;
}

#include<iostream>
using namespace std;



int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->link = second;

    second->data = 20;
    second->link = third;

    third->data = 30;
    third->link = fourth;

    fourth->data = 40;
    fourth->link = NULL;

     reverse(head);

}

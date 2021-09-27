#include <iostream>
using namespace std;

struct Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

Node *MergeTwoSortedLL(Node *a, Node *b)
{

    if (!a)
        return b;
    if (!b)
        return a;
    Node *head = NULL;
    Node *tail = NULL;

    if (a->data < b->data)
    {
        head = a;
        tail = a;
        a = a->next;
    }
    else
    {
        head = b;
        tail = b;
        b = b->next;
    }
    while (a && b)
    {
        if (a->data < b->data)
        {
            tail->next = a;
            tail = a;
            a = a->next;
        }
        else
        {
            tail->next = b;
            tail = b;
            b = b->next;
        }
    }
    if (!a)
        tail->next = b;
    else if (!b)
        tail->next = a;
    return head;
}

int main()
{

    return 0;
}
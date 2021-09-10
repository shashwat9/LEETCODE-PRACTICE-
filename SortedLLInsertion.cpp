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
Node *SortedLLInsertion(Node *head, int x)
{
    Node *n = new Node(x);
    if (head == NULL)
        return n;
    if (head->data > x)
    {
        n->next = head;
        return n;
    }
    Node *curr = head;
    while (curr->next && curr->next->data < x)
    {
        curr = curr->next;
    }
    n->next = curr->next;
    curr->next = n;
    return head;
}
int main()
{

    return 0;
}
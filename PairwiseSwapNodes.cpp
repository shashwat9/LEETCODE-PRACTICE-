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
Node *pairWiseSwap( Node *head)
{
    // method 2 ---like reverse
    if (head == NULL || head->next == NULL)
        return head;
    Node *curr = head->next->next;
    Node *prev = head;
    head = head->next;
    head->next = prev;
    while (curr && curr->next)
    {
        prev->next = curr->next;
        prev = curr;
        Node *temp = curr->next->next;
        curr->next->next = curr;
        curr = temp;
    }
    prev->next = curr;
    return head;
}

///*****METHOD 1 -- Swapping ****/////
void SwapPairWise(Node *head)
{
    Node *curr = head;
    while (curr && curr->next)
    {
        int temp = curr->next->data;
        curr->next->data = curr->data;
        curr->data = temp;

        curr = curr->next->next;
    }
    //T = O(N)
    //s = O(1)
}
int main()
{

    return 0;
}
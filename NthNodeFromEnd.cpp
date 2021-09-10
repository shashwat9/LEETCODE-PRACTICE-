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
int lengthOfLL(Node *head)
{
    if (head == NULL)
        return 0;
    return 1 + lengthOfLL(head->next);
}

void NthNodeFromEnd(Node *head, int x)
{
    //naive soln

    /*  if(head==NULL)return;

    int n = lengthOfLL(head);
    if(x>n)return;
    int count = 1;
    Node *curr = head;
    while (count <= n - x && curr != NULL)
    {
        count++;
        curr = curr->next;
    }
    cout<<curr->data;
  */

    //two pointer soln -- first and second pointer appraoch
    if (head == NULL)
        return;

    Node *second = head;
    Node *temp = head;
    int count = 1;
    while (count <= x && temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    if (temp)
    {
        Node *first = temp;
        while (first != NULL)
        {
            first = first->next;
            second = second->next;
        }
        cout << second->data << "\n";
        return;
    }
    if ((temp == NULL) && (count > x))
        cout << head->data;

    return;
}

int main()
{

    return 0;
}
int getNthFromLast(Node *head, int x)
{
    // Your code here
    if (head == NULL)
        return -1;

    Node *second = head;
    Node *temp = head;
    int count = 1;
    while (count <= x && temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    if (temp)
    {
        Node *first = temp;
        while (first != NULL)
        {
            first = first->next;
            second = second->next;
        }
        return second->data;
    }
    if ((temp == NULL) && (count > x))
        return head->data;

    return -1;
}
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
/*
Input:
N = 4
value[] = {10,20,4,30}
node = 20
Output: 10 4 30
Explanation: After deleting 20 from
the linked list, we have remaining
nodes as 10, 4 and 30.

*/

void deleteNode(Node *del)
{
    // Your code here
    Node *temp = del->next;
    del->data = temp->data;
    del->next = temp->next;
    delete (temp);
}
int main()
{

    return 0;
}
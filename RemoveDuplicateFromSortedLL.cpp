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
Node *RemoveDuplicatesFromSortedLL(Node *head)
{
    

    if(head==NULL)return NULL;
    if(head->next==NULL)return head;
    Node * backward = head;
    Node* forward = head->next;
    while(forward !=NULL){
        if(forward->data != backward->data){
            backward = backward->next;
            backward->data = forward->data;

        }
        forward = forward->next;
    }
   // here there is memory loss but it can be resolved
    backward->next = NULL;
    return head;

}
int main()
{

    return 0;
}
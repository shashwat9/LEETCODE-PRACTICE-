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

Node* SegregateEvenOddNode(Node* head){
    Node * es,*ee,*os,*oe = NULL;
    Node* curr = head;
    while(curr!=NULL){
        int x = curr->data;
        if(x%2==0){
            if(es==NULL){
                es = curr;
                ee = es;
            }
            else {
                ee->next = curr;
                ee = ee->next;
            }
        }
        else{
            if(os==NULL){
                os = curr;
                oe = os;
            }
            else{
                oe->next = curr;
                oe = oe->next;
            }
        }
        curr = curr->next;
    }
    if(es == NULL || os == NULL )return head;
    ee->next = os;
    oe->next = NULL;
    return es;

}
int main()
{

    return 0;
}

#include<iostream>
using namespace std;

struct Node{
    public:
    int data;
    Node *next;

    //making a constructor
    Node(int data){
        this->data=data;
        next=NULL;
    }
    
};

/*
  ll == 1->2->3->4->5->NULL
        5->4->3->2->1->NULL 

*/
Node* ReverseLL(Node *head){
    Node *prev = NULL;
    Node *curr = head;

    while(curr!=NULL){
    Node *n = curr->next;
    curr->next = prev;
    prev = curr;
    curr = n;
    }
    return prev;

}
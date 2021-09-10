#include <iostream>
using namespace std;

struct Node{
 public:
 int data;
 Node *next;
 Node(int data){
this->data=data;
next=NULL;
}
};

Node* ReverseLL(Node *head){
    Node *prev =NULL;
    Node *curr = head;
    while(curr!=NULL){
        Node *n = curr->next;
        curr->next = prev;
        prev = curr;
        curr = n;
    }
    return prev;
}
Node *addOne(Node *head)
{
    Node* res = head;
    Node *temp, *prev = NULL;
    int sum;
    int carry = 1; 
    while (head != NULL)
    {
        sum = carry + head->data;
        carry = (sum >= 10)? 1 : 0;
        sum = sum % 10;
        head->data = sum;
        temp = head;
        head = head->next;
    }
    if (carry > 0)
        temp->next = new Node(carry);
    return res;
    
}
Node* AddOneToNumber(Node *head){
        head = ReverseLL(head);
        Node *temp = addOne(head);
        head = ReverseLL(temp);
        return head;

        
}
int main(){





return 0;
}

Node* addOneToLL(Node *head){
    Node* temp = head;
    int carry = 1;int sum;
    Node* res=head;
    while(carry !=0 && temp!=NULL){
        sum = temp->data + carry;
        if(sum >= 10){
            carry =1;
        }
        else carry =0;
        sum %= 10;
        temp->data = sum;
        res = temp;
        temp = temp->next;
    }
    if(carry ==1){
        Node* newhead = new Node(carry);
        newhead->next = res;
        return newhead;

    }
    

}
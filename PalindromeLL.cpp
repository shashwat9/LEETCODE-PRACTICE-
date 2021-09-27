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

Node* middle(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast && fast->next){
        fast = fast->next->next;
        slow = slow->next;
        
    }
    return slow;

}
Node* Reverse(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    while(curr!=NULL){
        Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}
bool PalindromeLL(Node* head){
    if(head==NULL)return true;
     Node* mid = middle(head);
     Node* SecondHalf = Reverse(mid->next);
     Node* curr = head;
     while(SecondHalf!=NULL){
         if(SecondHalf->data != curr->data)return false;
         curr = curr->next;
         SecondHalf = SecondHalf->next;
     }
     return true;
     // TC= O(N)
     // SC = O(N)
}


bool PalindromeLL(Node* head){
    //Naive approach
    stack<char>st;
    Node* temp = head;
    while(temp!=NULL){
        st.push_back(temp->data);
        temp = temp->next;
    }

    Node* curr = head;
    while(curr!=NULL){
        if(st.top()!=curr->data){
            return false;
        }
        st.pop();
        curr = curr->next;
    }
    return true;

//  TC = O(N)-->2 ITERATIONS
//  SC = O(N)

}
int main()
{

    return 0;
}
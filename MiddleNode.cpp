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
///***1. Naive soln ****///
//in case there are two middle elements return second one
int lengthOfLL(Node* head){
    if(head==NULL)return 0;
    return 1 + lengthOfLL(head->next);
}
void MiddleNodeEle(Node* head){
    if(head==NULL)return;
    int count = lengthOfLL(head);
    Node* curr =head;
    int temp =1;
    while(temp <= count/2 && curr!=NULL){
        curr = curr->next;
    }
    cout<<curr->data;

    //O(N) + O(N) -- two traversals-->one in calculating length and one in 
    //                                reaching  Middle node

}

//***2. efficient soln ==> slow and fast pointer approch***////
int MiddleElement(Node* head){
    Node* slow = head;
    Node* fast = head;

    //fast==NULL ==> even nuber of nodes
    //fast->next == NULL ==>odd number of nodes
    while(fast!=NULL && fast!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;

    //single traversal==> O(N)
}
int main()
{

    return 0;
}
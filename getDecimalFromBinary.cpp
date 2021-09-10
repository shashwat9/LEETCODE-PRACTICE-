 #include <iostream>

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
 int getDecimalValue(Node* head) {
        //iterative
        int res =0;
        while(head!=NULL){
            res = (res << 1) + head->data;
            head = head->next;
        }
        return res;
 }
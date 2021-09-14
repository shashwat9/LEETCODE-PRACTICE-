#include <iostream>
#include <unordered_set>
using namespace std;

struct Node
{
public:
    int data;
    Node *next;
    bool visited;
    Node(int data)
    {
        this->data = data;
        visited = false;
        next = NULL;
    }
};

bool DetectLoop(Node *head)
{
    //method --1
    //appraoch -- O(N^2)
    Node *curr = head;
    while (curr != NULL)
    {
        Node *temp = head;
        while (temp != curr)
        {
            if (temp == curr->next)
            {
                return true;
            }
            temp = temp->next;
        }
        curr = curr->next;
    }
    return false;
}

bool DetectLoop(Node *head)
{

    //appraoch 2 -->if modification to original ll structure is allowed
    //we will have another data field bool visited ,initially marked false
    //O(N)==>but requires modification in original structur of LL

    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->visited == false)
        {
            curr->visited = true;
        }
        else
            return true;
        curr = curr->next;
    }
    return false;
}

bool DetectLoop(Node *head)
{
    //approach 3
    //using pointers ,refernces
    //we create a dummy node and then point every current node to that dummy
    //node while iterating the list and we keep checking if next of current is 
    //pointing to dummy node ,if it does we have found a loop!!!
    Node *temp = new Node(NULL);
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->next == NULL)
            return false;
        if (curr->next == temp)
            return true;
        Node *CurrNext = curr->next;
        curr->next = temp;
        curr = CurrNext;
    }
    return false;
}

bool DetectLoop(Node* head){
    //method 4 == HASHING
    //we look for the already traversed nodes in the set ,if found we return true 
    //t == O(N)
    //S == O(N) 
    unordered_set<Node*>st;

    Node* curr = head;
    while(curr!=NULL){
        if(st.find(curr)!=st.end()){
            return true;
        }
        st.insert(curr);
        curr = curr->next;
    }
    return false;
}

int main()
{

    return 0;
}
#include <iostream>
#include <unordered_set>
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

/////****METHOD 2****///////
int countNodes(Node *head)
{
    Node *curr = head;
    int cnt = 0;
    while (curr != NULL)
    {
        cnt++;
        curr = curr->next;
    }
    return cnt;
}
int get_intrsctn(int diff, Node *h1, Node *h2)
{
    int count = 1;
    Node *temp = h1;
    while (count <= diff && temp)
    {
        temp = temp->next;
        count++;
    }
    Node *head1 = temp;
    Node *head2 = h2;
    while (head1 && head2)
    {
        if (head1 == head2)
            return head1->data;
        head1 = head1->next;
        head2 = head2->next;
    }
    return -1;
}
int intersectPoint(Node *headA, Node *headB)
{
    // Your Code Here
    int count1 = countNodes(headA);
    int count2 = countNodes(headB);

    if (count1 > count2)
    {
        int d = count1 - count2;
        return get_intrsctn(d, headA, headB);
    }
    else
    {
        int d = count2 - count1;
        return get_intrsctn(d, headB, headA);
    }

    return -1;
}

////****Method 1***Hashing***//////

int getIntersection(Node *h1, Node *h2)
{
    /*
    // Method 1
    unordered_set<Node*>st;
    Node* curr1 = h1;
    Node* curr2 = h2;
    while(curr1 != NULL){
        st.insert(curr1);
        curr1 = curr1->next;
    }
    while(curr2!=NULL){
        if(st.find(curr2) != st.end()){
            return curr2->data;
        }
        curr2 = curr2->next;
    }
    return -1;

//T = O(M + N)
//S = O(M)

*/
}
int main()
{

    return 0;
}
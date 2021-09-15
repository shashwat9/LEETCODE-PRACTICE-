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
    fast will enter the cycle before or at same time as slow
    suppose if the distance between slow and fast is k ,everytime
    the loop runs ,the distance between slow and fast ,i.e, k ,increases
    by 1 ,a time will come when this distance will become equal to
    the length of the cycle  which means they meet ,and thus loop is
    detected.
    
    why always we move fast pointer twice of slow pointer ?? 
-->> because we need to ensure if we are incrementing k and we want to reach
     n ,then we must move fast pointer twice than slow pointer
     so that everytime the loop runs the distance or k is increemented
     only by one so we thus are ensured that n will be reached surely. 
*/
bool DetectLoop(Node *head)
{

    Node *slow = head;
    Node *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return true;
    }
    return false;
}

int main()
{

    return 0;
}
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> NextGreaterEleRight(int arr[], int n)
{

    vector<int> ans;
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        if (st.size() == 0)
            ans.push_back(-1);
        else if (st.size() > 0 && st.top() > arr[i])
        {
            ans.push_back(st.top);
        }
        else if (st.size() > 0 && st.top() < arr[i])
        {
            while (st.size() > 0 && st.top() <= arr[i])
            {
                st.pop();
            }
            if (st.size() == 0)
                ans.push_back(-1);
            else if (st.top() > arr[i])
                ans.push_back(st.top());
        }
        st.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    return v;
}

int main()
{
}
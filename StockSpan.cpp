#include <iostream>
#include <stack>
#include <pair>
#include <vector>

using namespace std;

vector<int> calculateSpan(int arr[], int n)
{
    // Your code here

    vector<int> ans;
    stack<pair<int, int>> st;
    for (int i = 0; i <= n - 1; i++)
    {
        if (st.size() == 0)
            ans.push_back(-1);
        else if (st.size() > 0 && st.top().first > arr[i])
        {
            ans.push_back(st.top().second);
        }
        else if (st.size() > 0 && st.top().first <= arr[i])
        {
            while (st.size() > 0 && st.top().first <= arr[i])
            {
                st.pop();
            }
            if (st.size() == 0)
                ans.push_back(-1);
            else if (st.size() > 0 && st.top().first > arr[i])
                ans.push_back(st.top().second);
        }
        st.push({arr[i], i});
    }
    for (int i = 0; i < ans.size(); i++)
    {
        ans[i] = i - ans[i];
    }
    return ans;
}

vector<int> StockSpan(int arr[], int n)
{
    //Brute Force
    vector<int> ans;
    ans.push_back(1);
    for (int i = 1; i <= n - 1; i++)
    {
        int cnt = 0;
        for (int j = i; j >= 0; j--)
        {
            if (arr[j] <= arr[i])
                cnt++;
            else
                break; //since we are looking for consecutives smaller elements only
        }
        ans.push_back(cnt);
    }
}
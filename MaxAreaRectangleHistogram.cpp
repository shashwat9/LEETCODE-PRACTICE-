#include <iostream>
#include <stack>
#include <pair>
#include <vector>

using namespace std;

vector<int> NearestSmallerToRight(int arr[], int n)
{
    vector<int> ans;
    stack<pair<int, int>> st;
    for (int i = n - 1; i >= 0; i--)
    {
        if (st.size() == 0)
            ans.push_back(n);
        else if (st.size() > 0 && st.top().first < arr[i])
        {
            ans.push_back(st.top().second);
        }
        else if (st.size() > 0 && st.top().first >= arr[i])
        {
            while (st.size() > 0 && st.top().first >= arr[i])
            {
                st.pop();
            }
            if (st.size() == 0)
                ans.push_back(n);
            else if (st.size() > 0 && st.top().first < arr[i])
            {
                ans.push_back(st.top().second);
            }
        }
        st.push({arr[i], i});
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
vector<int> NearestSmallerToLeft(int arr[], int n)
{
    vector<int> ans;
    stack<pair<int, int>> st;
    for (int i = 0; i <= n - 1; i++)
    {
        if (st.size() == 0)
            ans.push_back(-1);
        else if (st.size() > 0 && st.top().first < arr[i])
        {
            ans.push_back(st.top().second);
        }
        else if (st.size() > 0 && st.top().first >= arr[i])
        {
            while (st.size() > 0 && st.top().first >= arr[i])
            {
                st.pop();
            }
            if (st.size() == 0)
                ans.push_back(-1);
            else if (st.size() > 0 && st.top().first < arr[i])
            {
                ans.push_back(st.top().second);
            }
        }
        st.push({arr[i], i});
    }
    return ans;
}
int MaxAreaHistogram(int arr[], int n)
{
    vector<int> NearestSmallerToRightIndx = NearestSmallerToRight(arr, n);
    vector<int> NearestSmallerToLeftIndx = NearestSmallerToLeft(arr, n);

    vector<int> WidthOfRectangles;
    for (int i = 0; i < NearestSmallerToRightIndx.size(); i++)
    {
        WidthOfRectangles.push_back(NearestSmallerToRightIndx[i] - NearestSmallerToLeftIndx[i] - 1) ;
    }
    vector<int>MaxArea;
    for(int i = 0 ; i<n ; i++){
        MaxArea.push_back(arr[i]* WidthOfRectangles[i]);
    }
    int ans = *max_element(MaxArea.begin() , MaxArea.end());
    return ans;
}
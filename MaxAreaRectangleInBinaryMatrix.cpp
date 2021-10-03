#include <iostream>
#include <stack>
#include <pair>
#include <vector>

using namespace std;

vector<int> NearestSmallerToRight(vector<int> &arr)
{
    vector<int> ans;
    stack<pair<int, int>> st;
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        if (st.size() == 0)
            ans.push_back(arr.size());
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
                ans.push_back(arr.size());
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
vector<int> NearestSmallerToLeft(vector<int> &arr)
{
    vector<int> ans;
    stack<pair<int, int>> st;
    for (int i = 0; i <= arr.size() - 1; i++)
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
int MaxAreaHistogram(vector<int> &arr)
{
    vector<int> NearestSmallerToRightIndx = NearestSmallerToRight(arr);
    vector<int> NearestSmallerToLeftIndx = NearestSmallerToLeft(arr);

    vector<int> WidthOfRectangles;
    for (int i = 0; i < NearestSmallerToRightIndx.size(); i++)
    {
        WidthOfRectangles.push_back(NearestSmallerToRightIndx[i] - NearestSmallerToLeftIndx[i] - 1);
    }
    vector<int> MaxArea;
    for (int i = 0; i < arr.size(); i++)
    {
        MaxArea.push_back(arr[i] * WidthOfRectangles[i]);
    }
    int ans = *max_element(MaxArea.begin(), MaxArea.end());
    return ans;
}
int  maximalRectangle(vector<vector<int>> &arr)
{
    vector<int> v;
    int n = arr.size();
    int m = arr[0].size();
    for (int j = 0; j < m; j++)
    {
        v.push_back(arr[0][j]);
    }
    int max_area = MaxAreaHistogram(v);
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                v[j] = 0;
            }
            else
            {
                v[j] = v[j] + arr[i][j];
            }
        }
        max_area = max(max_area, MaxAreaHistogram(v));
    }
    return max_area;
}
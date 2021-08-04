#include <bits/stdc++.h>
#define ll long long
#define M 1000000007
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>arr(2* nums.size());
        for(int i=0;i<arr.size();i++){
            arr[i]=nums[i%nums.size()];
            
        }
        return arr;
        
    }
};
int main()
{ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);

    





return 0;
}
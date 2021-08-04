#include <bits/stdc++.h>
#define ll long long
#define M 1000000007
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
       /* vector <int>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[nums[i]]);
        }
        return ans;
        */
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]  + (nums[nums[i]] % n)*n;
               
        }
        for(int i=0;i<nums.size();i++){
            nums[i]/=n;
        }
        return nums;
    }
};
int main()
{ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);

  





return 0;
}
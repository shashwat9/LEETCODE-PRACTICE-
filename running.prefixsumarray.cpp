#include <bits/stdc++.h>
#define ll long long
#define M 1000000007
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>psa(nums.size());
        for(int i=0;i<psa.size();i++){
            if(i==0){psa[i]=nums[i];}
            else{
                psa[i]=psa[i-1] + nums[i];
            }
        }
        return psa;
    }
};
int main()
{ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);





return 0;
}
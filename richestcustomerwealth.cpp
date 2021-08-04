#include <bits/stdc++.h>
#define ll long long
#define M 1000000007
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=INT_MIN;
        for(auto it:accounts){
            int sum=0;
            for(auto it1:it){
                sum= sum  + it1;
               
            }
            ans=max(sum,ans);
        }
        return ans;
    }
};
int main()
{ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);





return 0;
}
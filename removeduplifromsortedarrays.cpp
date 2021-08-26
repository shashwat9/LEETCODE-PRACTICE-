#include <bits/stdc++.h>
#define ll long long
#define M 1000000007
#define pb push_back
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int removeDuplicatesFromSortedArray(vector<int>&nums){
    
    //2  POINTER APPROACH ==>> O(N) TIME AND O(1) SPACE
    if(nums.size()==0)return 0;
    int i=0,j=1;
    while(j<nums.size()){
        if(nums[j]!=nums[i]){
            i++;
            nums[i]=nums[j];
        }
        j++;
    }
    return i + 1;
  
  
  
    /*  if (nums.size()==0)return 0;
        int res=1;
        
        for(int i=0;i<nums.size();i++){
            if(nums[res-1]!=nums[i]){
               nums[res]=nums[i];
                res++;
                
            }
        }
        return res;
  */




   /* set<int>st;
    rep(i,0,n){st.insert(arr[i]);}
     return st.size();
    }
  */
}
int main()
{ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);

  vector<int>v={1,1,1,1,2,2,2,3,3,4};
    removeDuplicatesFromSortedArray(v);




return 0;
}
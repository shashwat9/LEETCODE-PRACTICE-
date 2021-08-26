#include<iostream>
using namespace std;

int firstOccurence(int arr[],int n,int ele){

        //arr[]= {2,4,10,10,10,18,20 }
        int start =0,end = n-1;int res=-1;
        while(start<=end){
            int mid = start + (end - start)/2;
          
            if(arr[mid]==ele){
                res = mid;
                end = mid -1;
            }
           
            else if(arr[mid]>ele){
                end= mid -1;
            }
            else if(arr[mid]<ele){
                start = mid  + 1;
            }
        }
       return res;






   /* int first_occur=-1;
            for(int i=0;i<n;i++){
                if(arr[i]==ele){
                    first_occur=i;
                    break;
                }
            }
            return first_occur;
   */

}
int lastOccurence(int arr[],int n,int ele){
        //arr[]= {2,4,10,10,10,18,20 }
        int start =0,end = n-1;int res=-1;
        while(start<=end){
            int mid = start + (end - start)/2;
          
            if(arr[mid]==ele){
                res = mid;
                start = mid +1;
            }
           
            else if(arr[mid]>ele){
                end= mid -1;
            }
            else if(arr[mid]<ele){
                start = mid  + 1;
            }
        }
       return res;
        
        
        
        
        
        
        
        
          /*  int last_occur=-1;
            for(int i=0;i<n;i++){
                if(arr[i]==ele){
                    last_occur=i;
                    
                }
            }
            return last_occur;
          */
}



/*  int Occurence(vector<int>&nums,int n,int target,int flag){
                int start=0,end=n-1;
                int indx=-1;
                while(start<=end){
                    int mid=start + (end - start)/2;
                    if(nums[mid]==target){
                        indx = mid;
                        if(flag==1)
                        { end = mid - 1;}
                        else if(flag==0){
                            start = mid +1;
                        }
                    }
                    else if(nums[mid]>target){
                        end =mid- 1;
                    }
                    else if(nums[mid]<target){
                        start = mid +1;
                    }
                }
        return indx;
    }
    
  
   
    vector<int> searchRange(vector<int>& nums, int target) {
           vector<int>ans;
        int n=nums.size();
        int first_occur=Occurence(nums,n,target,1);
        int last_occur= Occurence(nums,n,target,0);
        ans.push_back(first_occur);
        ans.push_back(last_occur);
        return ans;
    }
    
    */
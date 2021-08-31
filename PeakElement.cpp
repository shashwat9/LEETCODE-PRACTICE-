#include<iostream>
using namespace std;
/*
    we have to find index of the peakElement ,which is basically greater than 
    both its neighbour element.
    we are given an unsorted array but still here we can think of binary search for
    for this problem as we can return any of the possible answers
    also we need to check separately for the edge elements.


*/
//brute force
/*int peakElement(int arr[],int n){
    if(arr[0]>arr[1])return 0;
    else if(arr[n-1] > arr[n-2]){return n-1;}
    else{
        for(int i=1;i<=n-2;i++){
            if(arr[i] > arr[mid -1] && arr[i] >arr[mid +1]){
                return mid;
            }
        }
    }
}
*/
int findPeakElement(vector<int>& nums) {
        int n = nums.size();
       /* //brute
        if(nums[0] > nums[1]){
            
            return 0;
        }
        else if(nums[n-1] > nums[n-2]){
           
            return n-1;
        }
        else{
            for(int i=1;i<=n-2;i++){
                if(nums[i] > nums[i-1] && nums[i] > nums[i+1]){
                    
                    return i;
                }
            }
        
        }
        return -1;
        */
        int start =1,end=n-2;
        if(n==1)return 0;
         if(nums[0] > nums[1])return 0;
         if(nums[n-1] > nums[n-2])return n-1;
        while(start<=end){
            int mid = start + (end - start)/2;
            
            
                if(nums[mid] > nums[mid +1] && nums[mid] > nums[mid-1]){
                    
                    return mid;
                }
                else if(nums[mid] < nums[mid -1]){
                    end = mid -1;
                }
                else if(nums[mid] < nums[mid+1]){
                    start = mid +1;
                }
            
       
        
        }
        return -1;
        
}
int main(){
    int arr[] = {1,2};
    int n=2;
    cout<<peakElement(arr,n);
}
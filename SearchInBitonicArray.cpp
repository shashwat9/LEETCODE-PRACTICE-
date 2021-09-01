#include<iostream>
using namespace std;


int binarySearch(int arr[],int low,int high,int key,int flag){
    
    //int low=0,high=n-1;
    while(low<=high){
        int mid = (low) + (high - low)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            if(flag==0){
            high = mid-1;
            }
            else low = mid +1;
        }
        else if(arr[mid]<key){
            if(flag==0){
            low = mid + 1;
            }
            else high = mid -1;
        }

    }
    return -1;
        //  N/2^k = 1
        // O(LOG N)
}
int SearchMaxEleInBitonicArray(int arr[],int n){
        if(n==1)return 0;
        if(n==2)return 1;
        int start =0,end = n - 1;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(arr[mid] > arr[mid +1] && arr[mid] > arr[mid - 1]){
                 return mid ;
            }
            else if(arr[mid] <arr[mid -1]){
                end = mid -1;
            }
            else if(arr[mid] <arr[mid +1]){
                start = mid +1;
            }
        }
        return -1;
} 

int SearchElementInBitonicArray(int arr[],int n,int key){
    int maxEleindx = SearchMaxEleInBitonicArray(arr,n);
    
    int resIncArr = binarySearch(arr,0,maxEleindx,key,0);

    int resDecArr = binarySearch(arr,maxEleindx,n-1,key,1);

    int ans = max(resDecArr,resIncArr);
    if(ans==-1){return -1;}
    else return ans;


}
#include<iostream>
using namespace std;


int FirstOccurence(int arr[],int start,int end,int target){
        while(start<=end){
            int mid = start + (end - start)/2;int res=-1;
            if(arr[mid]==target){
                res = mid;
                end  = mid -1;
            }
            else if(arr[mid]>target){
                end  = mid -1;
            }
            else if(arr[mid]<target){
                start = mid +1;
            }
        }
        return res;
}

int SearchInBinaryInfinitelySortedArray(int arr[],int target){
    int start =0,end = 1;
    while(arr[end]!=1){
        start = end;
        end *= 2;
    }
    int indx = FirstOccurence(arr,start,end,target);
    return indx;
}
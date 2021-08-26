#include<iostream>
using namespace std;

//This question basically wants us to find out the
//position of minimum element and that will be the 
//number of rotations of the rotated sorted array
// arr[] = {11,12,15,18,2,5,6,8}
//for optimal approach we will use binary search
//we have to do two things ==>
// (1)we have to find the minimum element
// (2)we have to decide in which array we have to move to maintain binary search algo
//trick: try to look for unsorted array first in second part 
// while finding which part of array to search

int countRotatedSortedArr(int arr[],int n){
    int start = 0,end=n-1;int mid; int next;int prev;
    while(start<=end)
    {
         mid = start + (end-start)/2;
         next = (mid + 1)%n;
         prev = (mid + n -1)%n;
        if(arr[mid]<=arr[prev] && arr[mid]<=arr[next]){
            return mid;
        }
        
        else  if(arr[mid]>arr[end]){
                start = mid + 1;
        }
        else {
                end = mid - 1;
            }
    }
  }

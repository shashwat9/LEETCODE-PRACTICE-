#include<iostream>
using namespace std;

/*
    we will get minimum difference when we apply binary search
    for that particular key and finally when we come out of the 
    loop we get our low and high pointer elements get subtracted 
    from the key ,the minimum difference giving term is the ans.
*/
int minDiffElementInSortedArray(int arr[],int n,int key ){

     ll low=0,high=n-1;
    while(low<=high){
        ll mid = (low) + (high - low)/2; 
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            high = mid-1;
        }
        else if(arr[mid]<key){
            low = mid + 1;
        }
        int diff1 = arr[high] - key;
        int diff2 = arr[low] - key;
        if(diff1<diff2)return arr[high];
        else return arr[low];

    /*
    int FloorDiff = floor(int arr[],int key);
    int CeilDiff = ceil(int arr[],int key);
    int ans = min(FloorDiff,CeilDiff);
    return ans;
    */
}
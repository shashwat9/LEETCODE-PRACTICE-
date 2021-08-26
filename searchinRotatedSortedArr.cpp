#include<iostream>
using namespace std;

/*  arr[] = {11,12,15,18,2,5,6,8}

   here we have to find the index of an element in an array which is sorted and then rotated
   so basically we need to find the number of times it is rotated or i can say the index of the 
   minimum element and we observe that  the two arrays which are generated that are
     
       arr1 ==> from index start to min_indx
       arr2 ==> from index (min_indx +1) to (end)
     
    both arr1 and arr2 are sorted so we can apply binary search on them
    so the array which will return index>0 will be the answer ,whereas the other will return -1
    if both arrays return -1 then we can say that element is not present in the given array.
*/

int binarySearch(int arr[],int start,int end,int target){
    
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==target){return mid;}
        else if(arr[mid]>target){end = mid -1;}
        else if(arr[mid]<target){start =mid +1;}
    }
    return -1;
}
int minIndx(int arr[],int n){
    int start=0,end=n-1;
    
    while(start<=end){
        int mid  = start + (end - start)/2;
        int prev = (mid +n - 1)%n; 
        int next = (mid + 1)%n;
        if(arr[mid]<=arr[prev] && arr[mid]<=arr[next]){
            return mid;
        }
        else if(arr[mid]>arr[end]){
            start = mid +1;
        }
        else {
            end = mid -1;
        }
    }
    return -1;
}


int main(){
    int arr[]={11,12,15,18,2,5,6,8};
    int min_Indx=minIndx(arr,8);
    int ans1=binarySearch(arr,0,min_Indx-1,15);
    int ans2=binarySearch(arr,min_Indx,7,15);
    int ans= max(ans1,ans2);
    if(ans==-1){cout<<-1;}
   else  cout<<ans;
}
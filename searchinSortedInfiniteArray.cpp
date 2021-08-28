#include<iostream>
using namespace std;
int binarySearch(int arr[],int start , int end ,int target){
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid]==target){return mid;}
        else if(arr[mid]>target){end =  mid -1;}
        else if(arr[mid]<target){start = mid +1;}
    }
    return -1;
}
int searchInInfiniteSortedArray(int arr[],int target){
    int i=0,j=1;
    while(arr[j]<target){
        i=j;
        j *= 2;
    }
    int indx = binarySearch(arr,i,j,target);
    return indx;

}
int main() {
    

   int arr[] = {1, 2, 3, 5, 5};

	int x = 4;

	cout << searchInInfiniteSortedArray(arr, x);

	return 0;
}
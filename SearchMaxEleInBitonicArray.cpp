#include<iostream>
using namespace std;

/*
    similar to peak element problem
*/
int SearchMaxEleInBitonicArray(int arr[],int n){
        if(n==1){return arr[0];}
        if(n==2)return arr[1];
        int start =0,end = n - 1;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(arr[mid] > arr[mid +1] && arr[mid] > arr[mid - 1]){
                 return arr[mid] ;
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
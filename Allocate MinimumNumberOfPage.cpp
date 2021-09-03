#include <bits/stdc++.h>
using namespace std;


bool possibleAllocation(int arr[],int n,int students,int barrier){
    int allocatedChildren = 1;
    int pages = 0;//this will act as a sum of pages
    for(int i =0; i<n ;i++){
            if(arr[i] > barrier){return false;}
            if(pages + arr[i] > barrier){
            allocatedChildren += 1; //we increment the student count as we are crossing the barrier
            pages = arr[i];
            if(allocatedChildren > students)return false;
            }
            else pages += arr[i];
    }
    
     return true;
}

int AllocateMinimumPage(int arr[],int n,int Students){
    if(students > n)return -1;
        int res = -1;
        //defined a search space
        int low = *max_element(arr,arr+n);
        int high = accumulate(arr,arr+n,0);

        //applying binary search in the search space

        while(low <= high){
            int mid = low + (high - low)/2;
           
            //we gonna check if the barrier(mid) is being crossed while
            //allocating pages to children ,if it is,then we simply search
            //in the right part of this array and if it is not crossing then 
            //we can store it and we continue our search in the left part of the array

            if(possibleAllocation(arr,n,Students,mid)){
                res = mid;
                high = mid -1;//left part
            }
            else low  = mid +1;//right part
        }
        return low;
}



int main()
{
    





return 0;
}
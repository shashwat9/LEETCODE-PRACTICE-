#include<iostream>
#include<climits>
#include<vector>
using namespace std;

//right rotate
void rev(vector<int>&v,int start , int end){
    while(start  < end){
        swap(v[start],v[end]);
        start++;
        end--;
    }
}
void rotate(vector<int>v,int k){
    int n = v.size();
    k = k % n;
    rev(v,0,n-k-1);
    rev(v,n-k,n-1);
    rev(v,0,n-1);
}
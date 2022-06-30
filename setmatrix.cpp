#include<iostream>
#include<climits>
#include<vector>
#include<map>
using namespace std;

void setZeroes(vector<vector<int>>&A){
    int m = A.size();
    int n = A[0].size();
    int colZero = 0;//to check whether first col is col
    
    for(int  i =0;i<m;i++){
        if(A[i][0]==0)colZero=1;
        for(int j = 1;j<n;j++){
            if(A[i][j]==0){
                A[i][0] = A[0][j]=0;
            }
        }
    }
    
    for(int i = m-1;i>=0;i--){
        for(int j = n-1;j>=1;j--){
            if(A[i][0] == 0 || A[0][j] == 0){
                A[i][j] = 0;
            }
        }
        if(colZero==1)A[i][0]=0;
    }

}
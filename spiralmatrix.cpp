#include<iostream>
#include<climits>
#include<vector>
#include<map>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        //for currrow => k and for currcol =>l
        int k=0,l=0;
        vector<int>ans;
        while(k< m && l < n){
            
            for(int i =l ;i<n;i++){
                ans.push_back(matrix[k][i]);
            }
            k++;
            
            for(int i = k; i<m;i++){
                ans.push_back(matrix[i][n-1]);
            }
            n--;
            
            if(k < m){
                for(int i = n-1;i>=l;i--){
                    ans.push_back(matrix[m-1][i]);
                }
                m--;
            }
            
            if(l < n){
                for(int i = m-1;i>=k;i--){
                    ans.push_back(matrix[i][l]);
                }
                l++;
            }
            
         }
        return ans;
    }
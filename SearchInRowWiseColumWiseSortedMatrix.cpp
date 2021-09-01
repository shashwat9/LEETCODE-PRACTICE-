#include<iostream>
using namespace std;


 int search(vector<vector<int> > matrix, int n, int m, int target) 
    {
        // code here 
    
        
        int i =0 , j = m -1;
        while(i>=0 && i < n && j >=0 && j < m){
            if(matrix[i][j]==target){
                return true;
            }
            else if(matrix[i][j] > target){
                j--;
            }
            else if(matrix[i][j] < target){
                i++;
            }
        }
        return false;
    }

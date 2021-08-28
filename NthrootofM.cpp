#include<iostream>
#include<iomanip>
using namespace std;

/* Nth root of m

    ==>binary search is a way to go
    ==>

*/
double multiply(double mid,int n){
    double res = 1;
    for(int i = 1 ;i<=n ;i++){
        res *= mid;
    }
    return res;
}
double NthrootOfM(int m , int n){
    double start =1,end = m;
    double eps = 1e-7;double mid;
    while((end - start) > eps){
         mid = start + (end - start)/2.0;
        if(multiply(mid,n) <= m ){
            
            start = mid;
        }
        else {
            end  = mid;
        }

    }
     
             cout<<fixed<<setprecision(5)<<mid<<"\n";
    
   return mid;

}
int main(){
    int m,n;
    cin>>m>>n;
    cout<<NthrootOfM(m,n)<<"\n";
}
#include <bits/stdc++.h>
#define ll long long
#define M 1000000007
#define pb push_back
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int binarySearchUsingRecursion(int arr[],int low,int high,int key){
    if(low>high){
        return -1;
    }
    int mid = low + (high - low)/2;
    if(arr[mid] == key){return mid;}
    else if(arr[mid] > key){binarySearchUsingRecursion(arr,low,mid -1,key);}
    else if(arr[mid] < key){binarySearchUsingRecursion(arr,mid + 1,high,key);}
}



ll binarySearch(ll arr[],ll n,ll key){
    
    ll low=0,high=n-1;
    while(low<=high){
        ll mid = (low) + (high - low)/2; //we write like this to avoid integer overflow
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            high = mid-1;
        }
        else if(arr[mid]<key){
            low = mid + 1;
        }

    }
    return -1;
        //  N/2^k = 1
        // O(LOG N)
}

int main()
{ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);

    ll n;cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    sort(a,a+n);
    ll q;cin>>q;
    while(q--){
        ll x;cin>>x;
        int pos = binarySearch(a,n,x); 
        cout<<pos+1<<"\n";
    }
    




return 0;
}
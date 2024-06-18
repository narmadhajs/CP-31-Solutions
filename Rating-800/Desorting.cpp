#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int count=INT_MAX;
       int arr[n];
      for(int i=0;i<n;i++){
          cin>>arr[i];
      }
      if(!is_sorted(arr,arr+n)){
               cout<<0<<endl;
           }
           else{
       for(int i=1;i<n;i++){
          count=min(count,arr[i]-arr[i-1]);

      }
      cout<<(count/2)+1<<endl;
      }
    }
}

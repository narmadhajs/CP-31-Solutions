#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int count=0;
       int arr[n];
      for(int i=0;i<n;i++){
          cin>>arr[i];
      }
      for(int i=0;i<n;i++){
          if(arr[i]%2!=0){
              count++;
          }
      }
       if(count%2==0 ){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
    }
}

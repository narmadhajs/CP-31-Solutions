#include <iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
   cin>>t;
   while(t--){
       int n;int c=0;

       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++){
           cin>>arr[i];

       }
           if(arr[0]!=1){
               cout<<"NO"<<endl;
           }
           else{
               cout<<"YES"<<endl;
           }
       
   }

}

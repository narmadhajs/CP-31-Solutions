#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
       ll n;
       int count=0;
       int maxi=0;
      cin>>n;
  ;
   ll int b;
      for(int i=0;i<n;i++){
cin>>b;
if(b==1){
    count =0;

}
else{
    count++;
    maxi=max(count,maxi);
}
      }

cout<<maxi<<endl;
      
     
    }
     
}

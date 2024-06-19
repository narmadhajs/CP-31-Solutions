#include <iostream>
#include<bits/stdc++.h>
#include <functional>
#define ll long long
using namespace std;

int main() {
    int t;
    cin>>t;
   
    while(t--){
        int n;
        cin>>n;
        int cnt=0;
        vector<int>vi;
        char arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if((arr[i]=='1' && arr[n-1-i]=='0')||(arr[i]=='0'&& arr[n-1-i]=='1')){
                     
                   cnt=cnt+2;
            }
           else{
               break;
           }
        }
        if(n-cnt>0){cout<<n-cnt<<endl;
        }  
        else{
            cout<<2*n-cnt<<endl;
        }  }
}

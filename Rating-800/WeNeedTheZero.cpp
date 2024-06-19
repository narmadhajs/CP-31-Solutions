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
        
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int sum=accumulate(arr.begin(),arr.end(),0,std::bit_xor<int>());
        if (n%2!=0){
        cout<<sum<<endl;
        }
        else{
            if(sum==0){
               cout<<0<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
}

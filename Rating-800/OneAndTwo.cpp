#include<iostream>
#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ll int t;
    cin>>t;
    while(t--){
    ll int n;
    cin>>n;
    vector<ll>vi;
    vector<ll>v;
    int arr[n];
    
    for(ll int i=0;i<n;i++){
        cin>>arr[i];
    }
     ll k=arr[0];
     vi.push_back(k);
    for(ll int i=1;i<n-1;i++){
        k=k*arr[i];
        vi.push_back(k);
    }
       reverse(arr, arr + n);
     ll  int l=arr[0];
       v.push_back(l);
    for(int i=1;i<n-1;i++){
         l=l*arr[i];
        v.push_back(l);
    }
    reverse(v.begin(),v.end());
    // cout<<v.front()<<endl;
ll int s=-1;
    for(int i=0;i<vi.size();i++){
        if(v[i]==vi[i]){
            s=i+1;
            break;
        }
    }
    cout<<s<<endl;
    }
}

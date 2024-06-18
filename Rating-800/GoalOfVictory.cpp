#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vi(n-1);
        for(int i=0;i<n-1;i++){
            cin>>vi[i];
        }
        int sum=accumulate(vi.begin(),vi.end(),0);
cout<<-sum<<endl;

    }
}

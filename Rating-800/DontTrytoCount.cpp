#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int cnt=6;
        int f=0;
        int  res=0;
        string x,s;
        int n,m;
        cin>>n>>m;
        cin>>x>>s;
        while(cnt--){
            if(x.find(s)!=string::npos){
                f=1;
                break;
            }
            res++;
            x+=x;

        }
if (f==1){
    cout<<res<<endl;
}
else{
    cout<<-1<<endl;
}
    }
}

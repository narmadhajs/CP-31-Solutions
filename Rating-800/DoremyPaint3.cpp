#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
 
		vector<int>arr(n);
		for(int i=0; i<n; i++)
			cin>>arr[i];
 
		map<int,int> mp;
		bool yes = true;
		for(int i=0; i<n; i++){
			mp[arr[i]]++;
 
			if(mp.size() > 2){
				yes = false;
				break;
			}
		}
 
		if(mp.size() == 2){
			int f = begin(mp)->second;
			if(f != n/2 && f != (n+1)/2)
				yes = false;
 
		}
		if(yes)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;

	}
}
int main(){
	
	solve();
}

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
    int a,b,xk,yk,xq,yq;
    cin>>a>>b;
    cin>>xk>>yk>>xq>>yq;
    vector<pair<int,int>>vi={{a,b},{a,-b},{-a,b},{-a,-b},
                      {b,a},{b,-a},{-b,a},{-b,-a}};
        set<pair<int,int>>st1, st2;
		for(auto d: vi){
			int x = xk + d.first;
			int y = yk + d.second;
			st1.insert({x,y});
 
			x = xq + d.first;
			y = yq + d.second;
			st2.insert({x,y});
		}
		
		int ans = 0;
		for(auto pos: st1){
 
			if(st2.find(pos) != st2.end())
				ans++;
		}
		cout<<ans<<endl;
    
	}

}

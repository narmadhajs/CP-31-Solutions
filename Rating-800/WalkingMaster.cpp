#include <iostream>
#define ll long long
using namespace std;

int main() {
    int t;
    cin>>t;
   
    while(t--){
        int cnt=0;
     int a,b,c,d;
        cin>>a>>b;
        cin>>c>>d;
if(d<b){
    cout<<-1<<endl;
}
else if(a+d-b<c){
    cout<<-1<<endl;
}
else{
    cout<<(2*(d-b)+a-c)<<endl;
}
    }
}

#include <iostream>
#define ll long long
using namespace std;
ll int gcd(ll int a, ll int b)
{
    return (a%b == 0)? abs(b) : gcd(b,a%b);
}
bool isPossible(ll int a,ll int b,ll int c)
{
    return (c%gcd(a,b) == 0);
}
int main() {
    int t;
    cin>>t;
   
    while(t--){
       ll int cnt=0;
      ll  int n,k;
        cin>>n>>k;
      
if(isPossible(2, k, n)==true){
 
  

    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
    }
}

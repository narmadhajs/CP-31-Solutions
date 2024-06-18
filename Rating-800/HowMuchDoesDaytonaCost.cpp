#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        int x,flag=0;

        for(int i=0;i<m;i++){
            cin>>x;
            if(n==x){
                flag=1;

            }
        }
       
if(flag==0){
    cout<<"NO"<<endl;
}
      
else{
    cout<<"YES"<<endl;
}

    }
}

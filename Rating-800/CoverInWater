#include <iostream>
#include<string>
using namespace std;
int main() {
    int t;
   cin>>t;
   while(t--){
       string c;
       int n;
       cin>>n;
       cin>>c;
       int count=0;
       int count1=0;
       for(int i=0;i<n;i++){
           if(c[i]=='.' && c[i+1]=='.'&&c[i+2]=='.'){
               count=2;
               break;
           }
           else{
               if(c[i]=='#'){
                   count1++;
               }
             count=n-count1;
           }
            
       }
        cout<<count<<endl;
   }

}

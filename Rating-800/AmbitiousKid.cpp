#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    int main[n];
for(int i=0;i<n;i++){
cin>>arr[i];

}
for(int i=0;i<n;i++){
    if(arr[i]<0){
        main[i]=0-arr[i];
    }
    else{
        main[i]=arr[i];
    }
}
sort(main,main+n);
cout<<main[0];
}

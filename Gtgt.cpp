#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       int x;
       cin>>x;
       long long y = 10;
      while(y < x){
        y = (y * 10);
     
      }
       cout<<y+1<<endl; 
    }
    return 0;
}
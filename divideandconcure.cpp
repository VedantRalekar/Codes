#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
    int x, y;
    cin>>x>>y;
    bool ispos = false;
    for(int i=1;i<=x;i++){
        if(i * y == x){
            ispos = true;
            break;
        }
    }
    if(ispos){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
   }
  return 0;
}
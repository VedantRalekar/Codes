#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        bool flag = true;
        for(int i=1;i<n;i++){
            if(a[i] < a[i-1]){
                flag = false;
            }
        }
        if(flag == true){
            cout<<"YES"<<endl;
        }else{
             if(k <= 1){
             if(n == 1){
                 cout<<"YES"<<endl;
             }else{
                 cout<<"NO"<<endl;
             }
        }else{
            cout<<"YES"<<endl;
        }
      }
       
    }
    return 0;
}
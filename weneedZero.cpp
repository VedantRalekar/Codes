#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int &x : a) cin>>x;
        
        ll x = 0;
        for(int i=0;i<n;i++){
             x ^= a[i];
        }
        
        if(n%2 == 0){
            if(x==0){
                cout<<3<<endl;
            }else{
                cout<<-1<<endl;
            }
        }else{
            cout<<x<<endl;
        }
    }
    return 0;
}
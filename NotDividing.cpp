#include <bits/stdc++.h>
using namespace std;

using ll = long long;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n), ans(n);
        for(ll &x : a) cin>>x;
       
        for(int i=0;i<n;i++){
            if(a[i] == 1) a[i]++;
        }
      
        
        for(int i = 0;i<n-1;i++){
            if(a[i+1]%a[i] == 0){
                a[i+1]++;
            }
        }
        if(a[n-1]%a[n-2] == 0)a[n-1]++;
      
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
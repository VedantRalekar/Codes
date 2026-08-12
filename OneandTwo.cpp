#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v(n);
        for(ll &x : v) cin>>x;

        int cnt2 = 0;
        for(int i=0;i<n;i++){
            if(v[i] == 2){
                cnt2++;
            }
        }

        if(cnt2%2 != 0){
            cout<<-1<<endl;
            continue;
        }
        
        int req = cnt2/2;
        ll ans = -1;
        int left2 = 0;
        for(int i=0;i<n;i++){
            if(v[i] == 2) left2++;
             if(left2 == req){
                ans = i+1;
                break;
             }
             
        }

        cout<<ans<<endl;
    }
    return 0;
}
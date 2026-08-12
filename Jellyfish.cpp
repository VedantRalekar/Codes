#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a, b, n;
        cin>>a>>b>>n;
        vector<int> v(n);
        for(int &x : v) cin>>x;

        long long ans = b;
        for(int i=0;i<n;i++){
            ans += min(v[i],(int)a-1);
        }

        cout<<ans<<endl;

    }
    return 0;
}
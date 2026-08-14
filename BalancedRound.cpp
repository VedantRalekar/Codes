#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, k;
        cin>>n>>k;
        vector<ll> a(n), dif(n-1);
        for(ll &x : a) cin>>x;

        sort(a.begin(), a.end());

        for(int i=1;i<n;i++){
            dif[i-1] = abs(a[i]-a[i-1]);
        }

        int maxlen = 0, len = 0;

        for(int i=0;i<dif.size();i++){
            if(dif[i] <= k){
                len++;
            }else{
                maxlen = max(maxlen, len);
                len = 0;
            }
           
        }
        maxlen = max(maxlen, len);
      cout<<n-maxlen-1<<endl;
    }
    return 0;
}
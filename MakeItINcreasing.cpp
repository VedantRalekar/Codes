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

        int ans = 0,cntzero = 0;
    
        for(int i=n-2;i>=0;i--){
            if(cntzero > 1) break;
            while(a[i] >= a[i+1]){
                if(cntzero > 1) break;
                ans++;
                a[i] = floor(a[i]/2);
                if(a[i] == 0){
                cntzero++;
               }
            }
            
        }
        if(cntzero > 1) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}
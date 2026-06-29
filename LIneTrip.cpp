#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        int dist = a[0];
        for(int i=1;i<n;i++){
            dist = max(dist, a[i] - a[i-1]);
        }

        dist = max(dist , (x-a[n-1])*2);

        cout<<dist<<endl;
    }
    return 0;
}
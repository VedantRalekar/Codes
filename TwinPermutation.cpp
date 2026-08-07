#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n), ans(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int x = n;
        map<int, int> mpp;
        for(int i = 0;i<n;i++){
            mpp[a[i]] = i;
        }
        int j = 0;
        for(auto it : mpp){
            ans[it.second] = x;
            x--;
        }
        for(int x : ans){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
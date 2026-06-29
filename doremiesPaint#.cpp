#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        map<int, int> mpp;
        for(int i=0;i<n;i++) mpp[a[i]]++;
        if(mpp.size() > 2){
            cout<<"No"<<endl;
        }else{
            int mx = INT_MIN, mn = INT_MAX;
            for(auto it : mpp){
                mx = max(mx, it.second);
                mn = min(mn, it.second);
            }

            if(mx - mn == 1 || mx - mn == 0){
                   cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}
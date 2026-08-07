#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int &x : a) cin>>x;

        int ans = INT_MAX;
        bool check = false;
        for(int i=1;i<n;i++){
        
            ans = min(ans, a[i] - a[i-1]);
        }

        if(ans < 0){
            cout<<0<<endl;
        }else{
            cout<<ceil((double)(ans+1)/2)<<endl;
        }

        
    }
    return 0;
}
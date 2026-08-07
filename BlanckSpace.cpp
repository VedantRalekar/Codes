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

        int cnt = 0, mx = 0;

        for(int &it : a){
            if(it == 1){
                mx = max(mx, cnt);
                cnt = 0;
            }else{
                cnt++;
            }
        }
        if(cnt) mx = max(mx, cnt);
    
        cout<<mx<<endl;
    }
    return 0;
}
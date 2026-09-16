#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, q;
        cin>>n>>q;
        long long sum = 0;
        vector<long long> a(n), pre(n);
       
        for(long long &x : a) {
            cin>>x;
            sum += x;
        }
          pre[0] = a[0];
        for(int i=1;i<n;i++){
            pre[i] = pre[i-1] + a[i];
        }
        while(q--){
             long long l, r, k;
             cin>>l>>r>>k;
             long long temp = 0;
             if(l>1)
                temp = sum - (pre[r-1] - pre[l-2]) + (r-l+1)*k;
             else
                temp = sum - (pre[r-1] - 0) + (r-l+1)*k;
            if(temp%2 == 0){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
           
        }
       


    }
    return 0;
}
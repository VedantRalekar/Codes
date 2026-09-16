#include <bits/stdc++.h>
using namespace std;
vector<int> siveserotes(int n){
    n = n + 1;
    vector<int> prime(n+1, 0);
    prime[0] = prime[1] = 1;
    for(int i=2;i*i<=n;i++){
        if(prime[i] == 0){
        for(int p = i*i; p<=n; p+=i){
                prime[p] = 1;
            }
        }
    }
    return prime;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> a = siveserotes(n);
        if(a[n+1] == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
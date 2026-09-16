#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll minv=0, maxv=0;

        if(n%2 == 0  && n >=  4){
            minv += (n+5)/6;
            maxv += (n/4);
            cout<<minv<<" "<<maxv<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
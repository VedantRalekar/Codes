#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a, b, c;
        cin>>a>>b>>c;
        vector<long long> v = {a, b, c};
        sort(v.begin(), v.end());

        long long sum = v[0] + v[1];

        if(sum < v[2]){
            cout<<sum - v[0]<<endl;
        }else{
            cout<<v[2] - v[0]<<endl;
        }
    }
    return 0;
}
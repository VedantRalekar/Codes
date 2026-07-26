#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n), b(n);
        for(int &x : a) cin>>x;
        for(int &x : b) cin>>x;

        long long sum = 0;
        bool ispos = true;
        for(int i=0;i<n;i++){
            sum += (a[i] - b[i]);
            if(sum > 0) {
                ispos = false;
                break;
            }
        }

        cout<< ((ispos)? "YES" : "NO")<<endl;

   }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        vector<int> a(k);
        for(int &x : a) cin>>x;

        int cnt = 0;
        bool isthree = false;
        for(int i=0;i<k;i++){
            if(a[i] >= 2){
                if(a[i] >= 3) isthree = true;

                cnt++;
            }
        }
        cout<<((cnt >=2 || isthree) ? "YES" : "NO")<<endl;
    }
    return 0;
}

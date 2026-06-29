#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> vec(n);
        for(int i=0;i<n;i++) cin>>vec[i];

        bool isexist = false;
        for(int i=0;i<n;i++) {
            if(vec[i] == k){
                isexist = true;
                break;
            }
        }
        if(isexist){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
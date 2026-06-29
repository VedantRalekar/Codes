#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]== '1' && s[i + k] == '1'){
                s[i] = '0';
                s[i+k] = '0';
            }
        }
        bool got = false;
        for(int i=0;i<n;i++){
            if(s[i] == '1'){
                got = true;
                break;
            }
        }
        if(got){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
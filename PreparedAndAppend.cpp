#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int st = 0;
        int e = n - 1;
        while(st < e){
            if(s[st] == '1' && s[e] == '1' || s[st] == '0' && s[e] == '0'){
                break;
            }
            st++;e--;
        }

        // if(st == e) cout<<0<<endl;
         cout<<e - st + 1<<endl;
    }
    return 0;
}
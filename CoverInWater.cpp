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
        int ans = 0;
        int cnt = 0, dots = 0;
        bool isseq = false;
        for(char ch : s){
            if(ch == '.'){
                dots++;
                cnt++;
                if(cnt >= 3){
                    isseq = true;
                    cout<<2<<endl;
                    break;
                }
            }else{
                cnt = 0;
            }
        }
       
        if(isseq == false) cout<<dots<<endl;
    }
    return 0;
}
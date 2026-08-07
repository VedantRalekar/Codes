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
       
       bool del1 = false, del2 = false;
       for(int i=1;i<n-1;i++){
            if(s[i] != s[i-1] && s[i] != s[i+1]){
                if(s[i-1] == s[i+1]) del2 = true;
                else del1 = true;
            }
        }
       
       int ans = 1;
       for(int i=1;i<n;i++){
        if(s[i] != s[i-1]){
           ans++;
       }
    }
       if(del2){
          ans -= 2;
       }else if(del1){
        ans -= 1;
       }

       cout<<ans<<endl;
    }
    return 0;
}


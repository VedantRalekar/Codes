#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1, s2;
        cin>>s1>>s2;
        vector<int> a, b;
        long long ans = 0;
        for(int i=0;i<n;i += 2){
            if(s1[i] == '1') a.push_back(i);
            if(s2[i] == '1') b.push_back(i);
        }

        if(a.size() != b.size()){
            cout<<-1<<endl;
            continue;
        }
        for(int i=0;i<a.size();i++){
           ans += (abs(a[i] - b[i]))/2;
        }
 
        a.clear();
        b.clear();

       for(int i=1;i<n;i += 2){
            if(s1[i] == '1') a.push_back(i);
            if(s2[i] == '1') b.push_back(i);
        }
        
        if(a.size() != b.size()){
            cout<<-1<<endl;
            continue;
        }
        for(int i=0;i<a.size(); i++){
           ans += (abs(a[i] - b[i]))/2;
        }
     cout<<ans<<endl;
        
    }
    return 0;
}
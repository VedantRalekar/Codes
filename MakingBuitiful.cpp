#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int &x : a) cin>>x;

       sort(a.begin(), a.end());
       swap(a[0], a[n-1]);
       if(n >= 2 && a[0] == a[1]){
        swap(a[n-1], a[0]);
       }
       if(a[0] == a[n-1]){
        cout<<"NO"<<endl;
        continue;
       }
        
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n), b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
         for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int cnt = 0;
        for(int i=0;i<n;i++){
            int j = i;
            for(; j<n && a[j] > b[i]; j++);
            if(j == n){
                cnt = -1;
                break;
            }
            for(;j > i;j--){
                swap(a[j],a[j-1]);
                cnt++;
            }
        }
            
           
        
        cout<<cnt<<endl;
    }
    return 0;
}
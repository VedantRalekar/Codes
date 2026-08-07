#include <bits/stdC++.h>
using namespace std;

int  main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int pos = 0, neg = 0;
        for(int &x : a){
            cin>>x;
        }
        for(int x : a){
            if(x < 0){
                neg++;
            }else{
                pos++;
            }
        }
      int ans = 0;
       while(neg > pos){
        neg--;
        pos++;
        ans++;
       }

       if(neg%2 != 0) ans++;
       cout<<ans<<endl;
    }
    return 0;
}
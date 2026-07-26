#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int &x  : a) cin>>x;
        
        int neg = 0, pos = 0;

        for(int x : a){
            if(x > 0) pos++;
            else neg++;
        }

        if(n%2 != 0){
            cout<<"NO"<<endl;
        }else{
            if( neg == pos){
                cout<<"YES"<<endl;
            }
            else if(abs(neg - pos) % 4 == 0){
                cout<<"YES"<<endl;
            }else {
                cout<<"NO"<<endl;
            }
        }

    }
    return 0;
}


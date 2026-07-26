#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;

        if( a >= c){
            cout<<"First"<<endl;
        }else{
            cout<<((c%a == 0) ? "First" : "Second")<<endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    int mn = INT_MAX;
    for(int i=0;i<n;i++){
        mn = min(mn , abs(vec[i]));
    }
    cout<<mn<<endl;
    return 0;
}
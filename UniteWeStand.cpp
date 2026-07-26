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
        vector<int> b, c;
         unordered_map<int, int> mpp;
         int i = 0;
         while(true){
            mpp[a[i]]++;
            if(mpp.size() > 1 || i == n-1) break;
            b.push_back(a[i]);
            i++;
         }
        while(i < n){
            c.push_back(a[i]);
            i++;
        }

         if(a[0] == a[n-1]) cout<<-1<<endl;
         else {
            cout<<b.size()<<" "<<c.size()<<endl;
            for (int x : b)
                cout << x << " ";
            cout << "\n";

            for (int x : c)
                cout << x << " ";
            cout << "\n";
         }
        }
    
    return 0;
}
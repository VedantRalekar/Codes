#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, c;
        cin>>n>>c;
        vector<int> a(n), b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        int mna = *min_element(a.begin(), a.end());
        int mnb = *min_element(b.begin(), b.end());

        if(mna < mnb){
            cout<<-1<<endl;
        }else{
            int bsum = 0;
            bool isfind = false;
             for(int i=0;i<n;i++){
                if(a[i] < b[i]) isfind = true;
                bsum += abs(a[i] - b[i]);
             }

            int sum = 0;
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            for(int i=0;i<n;i++){
                sum += abs(a[i] - b[i]);
            }

            if(bsum < sum + c){
                if(isfind){
                    cout<<sum + c<<endl;
                }else{
                    cout<<bsum<<endl;
                }
            }else{
                cout<<sum+c<<endl;
            }
        }
        
    }
    return 0;
}
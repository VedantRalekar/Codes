#include <bits/stdc++.h>
using namespace std;

int main(){
    // int t;
    // cin>>t;
    // while(t--){
    //     int n;
    //     cin>>n;
    //     vector<int> a(n);
    //     for(int &x : a) cin>>x;

    //     int cnt=0, cnt1=0, cnt2=0,cnt3=0;
    //     for(int i = 0;i<n;i++){
    //         if(a[i] == 1)cnt1++;
    //         else if(a[i] == 2)cnt2++;
    //         else cnt3++;
    //         if(cnt == 0 && cnt1 >= cnt2+cnt3){
    //             cnt++;
    //             cnt1 = 0;
    //             cnt2 = 0;
    //             cnt3 = 0;
    //         }else if(cnt == 1 && cnt1 + cnt2 >= cnt3){
    //             cnt++;
    //             cnt1 = 0;
    //             cnt2 = 0;
    //             cnt3 = 0;
    //         }else{
    //             if(cnt >= 2 && n-i >= 1){
    //                 cnt++;
    //                 break;;
    //             }
    //         }
    //     }
      
    //     cout<<((cnt == 3) ? "YES" : "NO")<<endl;
    // }

    int i = 10;
    int *ptr = &i;
    // cout<<*ptr<<endl;
    // *ptr = 110;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<i<<endl;
    // cout<<&i<<endl;
    // cout<<&ptr<<endl;

    int ** ptr2 = &ptr;
    cout<<ptr2<<endl;
    cout<<**ptr2<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr2<<endl;
    return 0;
}
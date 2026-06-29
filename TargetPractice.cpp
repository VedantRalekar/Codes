#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<char>> vec(10,vector<char> (10));
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>vec[i][j];
            }
        }

        int ans = 0;
       for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
               if(vec[i][j] == 'X'){
                if(i==0 || j == 0 || i%5 == 4 || j%5 == 4){
                    ans += 1;
                }else if(i==1 || j == 1 || i%5 == 3 || j%5 == 3){
                    ans += 2;
                }else if(i==2 || j == 2 || i%5 == 2 || j%5 == 2){
                    ans += 3;
                }else  if(i==3 || j == 3 || i%5 == 1 || j%5 == 1){
                    ans += 4;
                }else if(i==4 || j == 4 || i%5 == 0 || j%5 == 0){
                    ans += 5;
                }else {
                    continue;
                }
               }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
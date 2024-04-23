#include "bits/stdc++.h"
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string A; cin>>A;
    int sz = A.size()-1;
    long long ans = 0, s = 0;
    int dp = 1<<sz;
    for(int i = 0; i<=dp-1; i++){
        s = A[0] - '0';
        for(int j = 1; j<=sz; j++){
            if(1<<(sz - j) & i){
                ans += s;
                s = A[j] - '0';
                if(j == sz) ans += A[j] - '0';
            }
            else{
             s = 10*s + A[j] - '0';
             if(j == sz) ans += s;
            }
        }
    }
    if(sz == 0) ans = A[0] - '0';
    cout<<ans;
    return 0;
}
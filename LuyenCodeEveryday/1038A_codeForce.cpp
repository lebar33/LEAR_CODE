#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    string s = "";
    int cnt[91] = {0};
    for(int i = 0; i < n; i++){
        char c; cin >> c;
        cnt[(int)c]++;
    }
    for(int i = 65; i < 65 + k; i++){
        if(cnt[i] == 0){
            cout << 0;
            return 0;
        }
    }
    int ans = 1e9;
    for(int i = 65; i < 65 + k; i++){
        ans = min(ans, cnt[i]);
    }
    cout << ans * k;
    return 0;
}
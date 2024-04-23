#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, cnt[123]; cin >> t;
    vector<int> ans;
    while(t--){
        memset(cnt, 0, sizeof(cnt));
        int n; cin >> n;
        for(int i = 0; i < n; i++){
            char c; ; cin >> c;
            cnt[(int)c]++;
        }
        int res = 0;
        for(int i = 0; i < 123; i++){
            if(cnt[i] != 0) res+= cnt[i] + 1; 
        }
        ans.push_back(res);
    }
    for(auto x: ans) cout << x << endl;
    return 0;
}
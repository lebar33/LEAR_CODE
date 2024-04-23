#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int last_pos(int l, int r, int a[], int x){ // tim vi tri cuoi cung <= x
    int ans = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] <= x){
            ans = m;
            l = m  + 1;
        }
        else r = m - 1;
    }
    return ans;
}
int main(){
    vector <int> ans;
    int t; cin >> t;
    while(t--){
        int n, m, k; cin >> n >> m >> k;
        int cnt = 0;
        int a[100], b[100];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];
        sort(b, b+m);
        for(int i = 0; i < n; i++){
            int res = last_pos(0, m - 1, b, k - a[i]);
            if(res != -1) cnt += res + 1;
        }
        ans.push_back(cnt);
    }
    for(auto x : ans) cout << x << endl;
}
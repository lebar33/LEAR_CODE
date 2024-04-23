#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[100], cnt[102] = { 1};
    for(int i = 0; i < n; i++){
        cin >> a[i];
        cnt[a[i]]++;
    }
    int ans = 0;
    for(int i = 1; i <= 100; i++){
        if(cnt[i] >= ans) ans = cnt[i];
    }
    cout << ans << "\n";
    return 0;
}
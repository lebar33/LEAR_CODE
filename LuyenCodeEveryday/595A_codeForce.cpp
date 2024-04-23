#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    int ans = 0;
    vector<pair<int,int>> v;
    for(int i = 0; i < n * m; i++){
        int x, y; cin >> x >> y;
        v.push_back({x, y});
    }
    for(auto x : v){
        if(x.first == 1 || x.second == 1) ++ans;
    }
    cout << ans;
}
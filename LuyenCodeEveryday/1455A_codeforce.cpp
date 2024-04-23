#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> ans;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        string tmp; cin >> tmp;
        ans.push_back(tmp.size());
    }
    for(auto x: ans) cout << x << endl; 
    return 0;
}
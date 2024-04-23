#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int t; cin >> t;
    vector<int> ans;
    while(t--){
        int n; cin >> n;
        int a[50];
        for(int i = 0; i < n; i++) cin >> a[i];
        int mina = 1e9;
        sort(a, a+n);
        for(int i = n - 1; i >= 1; i--){
            mina = min(mina, a[i] - a[i - 1]);
        }
        ans.push_back(mina);
    }
    for(auto x: ans) cout << x << endl;
    return 0;
}
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int d; cin >> d;
    vector<long long> ans;
    for(int i = 0; i < d; i++){
        set<int> se;
        int l, r; cin >> l >> r;
        for(int i = l - 1; i < r; i++){
            se.insert(a[i]);
        }
        ans.push_back(se.size());
    }
    for(auto x : ans) cout << x << endl;
    return 0;
}
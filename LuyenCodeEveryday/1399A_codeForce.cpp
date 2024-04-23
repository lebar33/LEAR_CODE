#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int t; cin >> t;
    vector<string> ans;
    while(t--){
        int n; cin >> n;
        int a[50];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        string tmp = "";
        for(int i = 0; i < n - 1; i++){
            if(abs(a[i] - a[i+1]) >= 2) tmp = "NO";
        }
        if(tmp != "NO") tmp = "YES";
        ans.push_back(tmp);
        
    }
    for(auto x: ans) cout << x << endl;
    return 0;
}
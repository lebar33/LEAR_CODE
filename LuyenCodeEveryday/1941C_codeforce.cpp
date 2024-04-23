#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector <int> ans;
    int t; cin >> t;
    while(t--){
        int cnt = 0;
        string s;
        int n; cin >> n >> s;
        for(int i = 0; i < n; i++){
            string tmp = s.substr(i, 3);
            if(tmp == "map" || tmp == "pie"){
                cnt++;
                i+=2;
            }
        }
        ans.push_back(cnt);
    }
    for(auto x : ans) cout << x << endl;
}
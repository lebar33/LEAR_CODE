#include <bits/stdc++.h>
using namespace std;
int main(){
   int T;
   cin >> T;
   unordered_map <int, vector<string>> mp;
   while (T--) {
       int n;
       string s;
       cin>>n;
        for (int i=1; i <= 3; ++i) { 
            for (int j = 0; j < n; ++j) {
                cin >>s;
                mp[s].guy.push_back(i);
                mp[s]. cnt += 1;
            }
        }
   }
    vector <int> points (4,0);
    for (auto &p : mp) {
        if (p.second.cnt == 1) 
           for (auto player : p.second.guy)
                points[player] += 3;
    
        else if (p.second.cnt == 2) 
            for (auto player: p.second.guy) 
                points[player] += 1;
    }
    for (int i = 1; i <= 3; ++i) cout << points [i] << " ";
    return 0;
    
}
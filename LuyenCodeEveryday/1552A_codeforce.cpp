#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    string s[40];
    string tmpS[40];
    int cnt[40] = {0};
    for(int i = 0; i < t; i++){
        int n; cin >> n; cin.ignore();
        cin >> s[i];
        tmpS[i] = s[i];
        sort(tmpS[i].begin(), tmpS[i].end());
    }
    for(int i = 0; i < t; i++){
        for(int j = 0; j < s[i].size(); j++){
            if(s[i][j] != tmpS[i][j]) cnt[i]++;
        }
    }
    for(int i = 0; i < t; i++) {
        cout << cnt[i] << endl;
    }
    return 0;
}
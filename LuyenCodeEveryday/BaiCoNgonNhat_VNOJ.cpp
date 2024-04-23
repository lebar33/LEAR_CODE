#include <bits/stdc++.h>
using namespace std;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int n, m;
string s[100];
void dequy(int i, int j){
    s[i][j] = '.';
    for(int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m &&  s[i1][j1] == '#'){
            dequy(i1, j1);
        }
    }
}
int main(){
    cin >> n >> m;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
           if(s[i][j] == '#'){
                ++cnt;
                dequy(i, j);
           }
        }
    }
    cout << cnt;
    return 0;
}
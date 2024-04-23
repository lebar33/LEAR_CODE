#include <iostream>
using namespace std;
string s = "codeforces";
int solve(char c){
    for(int i = 0; i < 10; i++){
        if(c == s[i]) return 1;
    }
    return 0;
}
int main(){
    int n; cin >> n;
    int a[n] = {0};
    for(int i = 0; i < n; i++){
        char tmp; cin >> tmp;
        a[i] = solve(tmp);
    }
    for(int i = 0; i < n; i++){
        if(a[i] == 1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
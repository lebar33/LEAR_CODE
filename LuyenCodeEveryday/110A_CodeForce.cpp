#include <iostream>
using namespace std;
int solve(string s){
    int cnt = 0, l = s.length();
    for(int i = 0; i < l; i++){
        if(s[i] == '4' || s[i] == '7') cnt++;
    }
    return cnt == 4 || cnt == 7;
}
int main(){
    string s; cin >> s;
    if(solve(s)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
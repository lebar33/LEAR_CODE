#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    cin.ignore();
    string s[100];
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    for(int i = 0; i < n; i++){
        int l= s[i].length();
        if(l <= 10) cout << s[i] << endl;
        else{
            cout << s[i][0] << l - 2 << s[i][l-1] << endl;
        }
    }
    return 0;
}
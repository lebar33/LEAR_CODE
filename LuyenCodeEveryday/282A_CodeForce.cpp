#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    string s[150];
    int x = 0;
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    for(int i = 0; i < n; i++){
        if(s[i][1] == '-') --x;
        else ++x;
    }
    cout << x << endl;
    return 0;
}
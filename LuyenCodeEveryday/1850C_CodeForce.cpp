#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    int n = t;
    string s[t] = {""};
    while(t){
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                char c; cin >> c;
                if(c >= 'a' && c <= 'z' ) s[n-t]+=c;
            }
        }
        t--;
    }
    for(int i = 0; i < n; i++){
        cout << s[i] << endl;
    }
}
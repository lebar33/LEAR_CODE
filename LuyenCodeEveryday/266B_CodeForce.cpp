#include <iostream>
using namespace std;

int main(){
    string s;
    int n, t;
    cin >> n >> t >> s;
    for(t; t > 0; t--){
        for(int i = 0; i < n-1; i++){
            if(s[i] == 'B'&& s[i+1] == 'G') {
                swap(s[i], s[i+1]);
                i++;
            }
        }
    }
    cout << s;
    return 0;
}
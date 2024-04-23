#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int dat = 0;
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < 3; j++){
            int x; cin >> x;
            if(x == 1) cnt++;
        }
        if(cnt >= 2) dat++;
    }
    cout << dat << endl;

    return 0;
}
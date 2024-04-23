#include <iostream>
using namespace std;

int main(){
    int a[5][5], r, c;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> a[i][j];
            if(a[i][j] == 1){
                r = i;
                c = j;
            }
        }
    }
    cout << abs(2 - r) + abs(2 - c) << endl;
    return 0;
}
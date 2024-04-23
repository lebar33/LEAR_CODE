#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int totalM = 0, totalF = 0;
    for(int i = 0; i < n; i++){
        int m; cin >> m; totalM+= m;
        int f; cin >> f; totalF+= f;
    }
    if(totalM > totalF) cout << "Mishka";
    else if(totalM < totalF) cout << "Chris";
    else cout << "Friendship is magic!^^";
    return 0;
}
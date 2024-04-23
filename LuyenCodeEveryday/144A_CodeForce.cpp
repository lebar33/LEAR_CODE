#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int maxa = -1e9, mina = 1e9;
    for(int i = 0; i < n; i++){
        maxa = max(maxa, v[i]);
        mina = min(mina, v[i]);
    }
    int i = 0, ans = 0;
    while(v[i] != maxa) i++;
    ans += i;
    int r = 0;
    i = n - 1;
    while(v[i] != mina) {
        i--;
        ++r;
    }
    if(ans > i) ans+=r - 1;
    else ans+=r;
    cout << ans;
    return 0;
}
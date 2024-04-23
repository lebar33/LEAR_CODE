#include <iostream>
using namespace std;
int last_pos(int a[], int l, int r, int x){
    int res = -1;
    while(l <= r){
        int m = (l + r)/2;
        if(a[m] >= x) {
            res = m;
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    return res;
}
int main(){
    int n, k; cin >> n >> k;
    int a[50];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(a[k - 1] == 0){
        cout << last_pos(a, 0, n - 1, a[k-1] + 1) + 1 << endl;
    }
    else{
        cout << last_pos(a, 0, n - 1, a[k-1]) + 1 << endl;
    }
    return 0;
}
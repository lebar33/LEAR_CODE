#include <iostream>
#include <algorithm>
using namespace std;
int pos(int a[], int l, int r, int x){
    int ans = -1;
    while(l <= r){
        int m = (l + r)/2;
        if(a[m] == x) ans = m;
        else if(a[m] < x) l = m + 1;
        else r = m - 1;
    }
    return ans;
}
int a[1000001];
int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int k; cin >> k;
    sort(a, a+n);
    int cnt = 0;
    for(int i = 0; i < n - 1; i++){
        int tmp = pos(a, i+1, n - 1, k - a[i]);
        if(tmp != -1) ++cnt;
    }
    cout << cnt << endl;
    return 0;
}
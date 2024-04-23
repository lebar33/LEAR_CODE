#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    int lAns = min(a, b), rAns = (max(a, b) - lAns) / 2;
    cout << lAns << " " << rAns;
    return 0;
}
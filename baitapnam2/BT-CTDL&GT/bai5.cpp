
#include <iostream>

using namespace std;
long long gt(int n){
    if(n == 1) return n;
    return n * gt(n-1);
}
long long tongFibo(int n){
    int f[30];
    f[0] = 0; f[1] = 1;
    long long s = f[1];
    for(int i = 2; i <= n; i++){
        f[i] = f[i-2] + f[i-1];
        s+=f[i];
    }
    return s;
}
int main()
{
    int m, n; cin >> m >> n;
    long long s = gt(m) + tongFibo(n);
    cout << s;
    return 0;
}


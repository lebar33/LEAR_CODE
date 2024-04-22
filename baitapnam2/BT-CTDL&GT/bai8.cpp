
#include <iostream>

using namespace std;
long long gt(long long n){
    if(n == 1) return 1;
    return n*gt(n-1);
}
long long sA(long long n){
    long long s =0;
    for(long long i = 1; i <= n; i++){
        s+= i;
    }
    return s;
}
long long sB(long long n){
    long long s =0;
    for(long long i = 1; i <= n; i++){
        long long x = i*i;
        s += x;
    }
    return s;
}
double sC(double n){
    double s = 0;
    for(long long i = 1; i<= n; i++){
        s+=(float)1/i;
    }
    return s;
}
long long sD(int n){
    long long s =1;
    for(long long i = 1; i <= n; i++){
        s*=i;
    }
    return s;
}
long long sE(int n){
    long long s =0;
    for(long long i = 1; i <= n; i++){
        s+=gt(i);
    }
    return s;
}
int main()
{
    int n; cin >> n;
    cout << sE(n);
    return 0;
}


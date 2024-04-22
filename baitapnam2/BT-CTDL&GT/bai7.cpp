#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
void sodaonguoc(string n){
    int l = n.length();
    for(int i = l - 1; i >= 0; i--){
        cout << n[i];
    }
}
int soDX(int n){
    int tmp = n, r = 0;
    while(n){
        r = r * 10 + n%10;
        n/=10;
    }
    return tmp == r; 
}
int soCP(long long n){
    for(long long i = 0; i <= sqrt(n); i++){
        if(i*i == n) return n >= 0;
    }
    return 0;
}
int soNT(long long n){
    for(int i = 2; i <=sqrt(n); i++){
        if(n%i == 0) return 0;
    }
    return n > 1;
}
long long sum_odd_digits(long long n){
    long long s = 0;
    while(n){
        int r = n%10;
        if(r % 2 != 0) s+=r;
        n/=10;
    }
    return s;
}
long long sum_prime_digits(long long n){
    long long s = 0;
    while(n){
        int r = n%10;
        if(soNT(r)) s+=r;
        n/=10;
    }
    return s;
}
long long sum_square_digits(long long n){
    long long s = 0;
    while(n){
        int r = n%10;
        if(r == 4 || r == 9) s+=r;
        n/=10;
    }
    return s;
}
int main()
{
    int a; cin >> a;
    cout << sum_square_digits(a);
    return 0;
}


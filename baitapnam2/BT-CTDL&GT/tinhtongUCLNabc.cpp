#include <iostream>

using namespace std;
int ucln(int a, int b){
    if(b == 0){
        return a;
    }
    return ucln(b, a%b);
}

int main()
{
    int a, b, c; cin >> a >> b >> c;
    long long s = ucln(a, b) + ucln(a, c) + ucln(b, c);
    cout << s;
    return 0;
}


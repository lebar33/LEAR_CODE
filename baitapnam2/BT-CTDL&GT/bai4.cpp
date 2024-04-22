
#include <iostream>

using namespace std;
int ucln(int a, int b){
    if(b == 0){
        return a;
    }
    return ucln(b, a%b);
}
int bcnn(int a, int b){
    return (a * b) / ucln(a, b);
}

int main()
{
    int a, b, c; cin >> a >> b >> c;
    long long s = ucln(a, b) + bcnn(a, c);
    cout << s;
    return 0;
}


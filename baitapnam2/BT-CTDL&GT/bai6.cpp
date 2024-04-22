#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;
void giaiptb1(float a, float b){
    if(a == 0){
        if (b==0) cout << "PT bac 1 vo so nghiem" << endl;
        else cout << "PT bac 1 vo nghiem" << endl;
    }
    else cout << "Nghiem cua phuong trinh la " << fixed << setprecision(2) << -b/a << endl;
}
void giaiptb2(float a, float b, float c){
    float dta = b*b - 4*a*c;
    if(a == 0){
        giaiptb1(b, c);
    }
    else {
        if(dta < 0) cout << "PT bac 2 vo nghiem" << endl;
        else if(dta == 0) cout << "PT bac 2 co nghiem kep " << -b/2*a;
        else if(dta > 0) cout << "PT bac 2 co 2 nghiem la " <<fixed << setprecision(2) << (-b + sqrt(dta))/2*a <<" "<< fixed << setprecision(2) <<(-b - sqrt(dta))/2*a << endl;
    }
}
void giatrinhonhat(int a, int b, int c, int d){
    int min1 = -1e9;
    if(min1 <= a) min1 = a;
    if(min1 <= b) min1 = b;
    if(min1 <= c) min1 = c;
    if(min1 <= d) min1 = d;
    cout << "So be nhat trong 4 so la " << min1 << endl;
}
void hoanvi(int a, int b){
    int t = a;
    a = b;
    b = t;
    cout << a << " " << b << endl ;
}
void sapxep(int a, int b, int c){
    int s = a + b + c;
    cout << min(a, min(b,c)) << " " << s - max(a, max(b, c)) - min(a, min(b, c)) << " " << max(a, max(b,c)) << endl ; 
}
int main()
{
    cout<<"Hello World";

    return 0;
}


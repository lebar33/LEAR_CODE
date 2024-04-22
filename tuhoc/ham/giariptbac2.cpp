#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float a,b,c;
	float d;
	cout << "Nhap a,b,c: " << endl;
	cin >> a >> b >> c;
	d=b*b-4*a*c;
	if (a == 0){
		if (b==0){
			if (c==0){
				cout<< "PTVSN";
			}
			else{
				cout<< "PTVN";
			}
		}
		else{
			cout << "PT co 1 no x=" << -c/b;
		}
	}
	else {
		if (d<0){
			cout << "PTVN";
		}
		else if(d==0){
			cout << "PT co nghiem kep x=" << -b/(2*a);
		}
		else{
			cout << "PT co 2 nghiem phan biet:" << endl;
			cout << " X1=" << (-b - sqrt(d))/(2*a) << endl;
			cout << " X2=" << (-b + sqrt(d))/(2*a);
		}
	}
	return 0;
}

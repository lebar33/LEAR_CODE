#include <iostream>
using namespace std;
int main(){
	int n,*p;
	cout << "Nhap so phan tu cua day : ";
	cin >> n;
	int a[n];
	p=a;
	for(p=a;p<a+n;p++){
		cin >> *p;
	}
	for (p=a+n-1;p>=a;p-- ){
		cout << *p << " ";
	}
	return 0;
}

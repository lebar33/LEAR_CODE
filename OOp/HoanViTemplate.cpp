#include <iostream>
using namespace std;
template<class T>
void hoanvi(T& a, T& b){
	T tmp = a;
	a = b;
	b = tmp;
}
int main(){
	char a, b; cin >> a >> b;
	cout << "Truoc khi hoan vi a= " << a << ", b= " << b << endl;
	hoanvi(a,b);
	cout << "Sau khi hoan vi a= " << a << ", b= " << b << endl; 
	return 0;
}

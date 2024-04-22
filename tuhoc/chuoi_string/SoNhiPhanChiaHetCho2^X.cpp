#include <iostream>
#include <string.h>
using namespace std;
// so nhi phan N co chia het cho 2^x hay ko: 
// vi du 1110110 = 0*2^0 + 1*2^1 + 1*2^2 + 1*2^3 + 0*2^4 ...ko chia het cho 2^4
// de chia het cho 2^4 thi tu phan tu thu N.length - 4 tro di phai la bit 0 het
// tai vi neu co so 1 vao thi no se co the chua 2^x < 2^4 thi khi cong cac bit con lai vao se ko chia het cho 2^4
// de chuyen thanh so nguyen thi tu cuoi tro ve 
// chia het cho 2^4 khi x >=4 co nghia la 2^4 + 2&5 + 2^6 .. 
int check(string a, int x){
	if(a.length() <= x) return 0;
	for(int i = a.length() - 1; i>= a.length() - x - 1; i--){
		if(a[i] == '1') return 0;
	}
	return 1;
}
int main(){
	int t; cin >> t;
	while(t--){
		string a; int x;
		cin >> a >> x;
		if(check(a, x)) cout << "YES\n";
		else cout << "NO\n";
 	}
	return 0; 
} 

#include <iostream>
#include <string.h>
using namespace std;
void reverse(int a[],int n){
	int l = 0, r = n - 1;
	while(l<r){
		int tmp = a[l];
		a[l] = a[r];
		a[r] = tmp;
		l++, r--;
	} 
}
//quy dinh a > b;
void sub(string a, string b){
	int n1 = a.length(), n2 = b.length(), n = 0;
	int x[n1], y[n1], z[n1];
	for(int i = 0; i < n1; i++) x[i] = a[i] - '0';
	for(int i = 0; i < n2; i++) y[i] = b[i] - '0';
	reverse(x, n1); reverse(y, n2);
	for(int i = n2; i < n1; i++){
		y[i] = 0;
	}
	int nho = 0;
	for(int i = 0; i < n1; i++){
		int tmp = x[i] - y[i] - nho;
		if(tmp < 0) {
			nho = 1;
			z[n++] = 10 + tmp; 
		} 
		else{
			z[n++] = tmp;
			nho = 0; 
		} 
	}
	int ok = 0; 
	for(int i = n-1; i>=0; i--){
		if(ok == 0 && z[i]){
			ok = 1; 
		}
		if(ok == 1) cout << z[i]; 
	}
	if(ok == 0) cout << "0";
}
int main(){
	int t; cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		if (a.length() > b.length() || (a.length() == b.length() && a > b)) sub(a, b);
		else sub(b,a);
		cout << endl;
	}
	return 0; 
} 

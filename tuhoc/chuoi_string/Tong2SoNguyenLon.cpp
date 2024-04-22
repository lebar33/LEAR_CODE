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
void add(string a, string b){
	int n1 = a.length(), n2 = b.length(), n = 0;
	int x[n1], y[n1], z[n1+1];
	for(int i = 0; i < n1; i++) x[i] = a[i] - '0';
	for(int i = 0; i < n2; i++) y[i] = b[i] - '0';
	reverse(x, n1); reverse(y, n2);
	for(int i = n2; i < n1; i++){
		y[i] = 0;
	}
	int nho = 0;
	for(int i = 0; i < n1; i++){
		int tmp = x[i] + y[i] + nho;
		z[n++] = tmp%10;
		nho = tmp/10;
	}
	if (nho == 1) z[n++] = nho;
	reverse(z, n);
	for(int i = 0; i < n; i++){
		cout << z[i];
	} 
}
int main(){
	int t; cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		if (a.length() >= b.length()) add(a, b);
		else add(b,a);
		cout << endl;
	}
} 

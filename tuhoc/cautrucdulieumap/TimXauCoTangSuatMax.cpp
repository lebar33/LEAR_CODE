#include <iostream>
#include <string.h>
#include <sstream>
using namespace std;
string strlwr(string n){
	for(int i = 0; i < n.length(); i++){
		n[i] = tolower(n[i]);
	}
	return n;
}
void TSLN(string n){
	n = strlwr(n);
	stringstream ss(n);
	string tmp;
	string a[20];
	int k = 0;
	while(ss >> tmp){
		a[k] = tmp;
		k++	;
	}
	string ans1 = a[0]; int ans2 = 0;
	for(int i = 0; i < k; i++){
		int d = 1;
		for(int j = i+1; j < k; j++){
			if(a[i] == a[j]){
				++d;
			}
		}
		if(d > ans2) {
			ans2 = d;
			ans1 = a[i];
		}
		else if(d==ans2 && a[i] < ans1){
			ans1 = a[i];
		}
	}
	cout << ans1 << " " << ans2;
	
}
void CacTuTrongXau(string n){
	stringstream ss(n);
	string tmp;
	string a[20];
	int k = 0;
	while(ss >> tmp){
		a[k] = tmp;
		k++	;
	}
	for(int i = 0; i < k; i++){
		int ok = 1;
		for(int j = 0; j < i; j++){
			if(a[i] == a[j]) ok = 0;
		}
		if(ok ) cout << a[i] << " ";
	}
}
int main(){
    string n; getline(cin, n);
	CacTuTrongXau(n);	
}

#include <iostream>
#include <string.h>
using namespace std;
int codeForce(string n){
	int cnt = 0, l = 0, r = l;
	for(int i = 0; i < n.length(); i++){
		if(n[i] == '1') l = i; break;
	}
	for(int i = l + 1; i < n.length(); i++){
		if(n[i] == '1') r = i;
	}
	if(r != 0) {
		for(int i = r; i > l; i--){
			if(n[i] == '0') ++cnt;
		}
		return cnt;
	}
	return 0;
}
int main(){
	string n; cin >> n;
	cout << codeForce(n);
	return 0;
}

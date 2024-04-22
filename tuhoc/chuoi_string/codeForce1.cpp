#include <iostream>
#include <string.h>
using namespace std;
int codeForce1(string n){
	int cnt = 0, idex = -1, ans = 0;
	for(int i = 0; i < n.length(); i++){
		if(n[i] == '1'){
			if(idex == -1) idex = i;
			else{ 
			    ans += i - idex - 1;
			    idex = i;
			}
		}
	}
	return ans;
}
int main(){
	string n; cin >> n;
	cout << codeForce1(n);
	return 0;
}

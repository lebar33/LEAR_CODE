#include <iostream>
#include <string.h> 
using namespace std;
int checkSymmetry3(string n){
	int cnt[256] = {0};
	for(int i = 0; i < n.length(); i++){
		for(int j = 0; j < i; j++){
			if(n[i] == n[j]) ++cnt[(int)n[i]]; 
		} 
	}
	int l = 0;
	for(int i = 0; i < 256; i++){
	     if(cnt[i] % 2 == 1) ++l; 
	} 
	if(l <= 1 ) return 1;
	return 0;
} 
int main(){
	string n; cin >> n;
	cout << checkSymmetry3(n); 
} 

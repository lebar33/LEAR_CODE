#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
	string a; cin >> a;
	int idx = 0, n = a.length(); 
	while(idx < n){
		int last_idx = idx;
	    char tmp = a[idx];
		for(int i = idx; i < n; i++){
			if(a[i] > tmp){
				tmp = a[i];
			}
		}
		for(int i = idx; i < n; i++){
			if(a[i] == tmp){
				cout << a[i];
				last_idx = i;
			}
		}
		idx = last_idx+1;
	}
	return 0; 
} 

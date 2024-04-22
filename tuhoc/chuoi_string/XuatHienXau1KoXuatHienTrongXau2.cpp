#include <iostream>
#include <string.h>
#include <sstream>
using namespace std;
void sortString(string a[], int n){
	for(int i = 0; i < n; i++){
		int idex = i;
		for(int j = i+1; j < n; j++){
			if(a[i].compare(a[j]) == 1){
				idex = j;
			}
		}
		swap(a[i], a[idex]);
	}
}
void solve(string a, string b){
	string aa[1000];
	string bb[1000];
	stringstream ss1(a);
	stringstream ss2(b);
	int k, l = 0;
	string tmp;
	while(ss2 >> tmp){
		bb[l] = tmp;
		++l;
	}
	while(ss1 >> tmp){
		int ok = 1;
		for(int i = 0; i < l; i++){
			if(tmp.compare(bb[i]) == 0){
				ok = 0;
			}
		}
		if(ok) aa[k] = tmp; ++k;
	}
	sortString(aa, k);
	for(int i = 0; i < k; i++){
		int ok = 1;
		for(int j = 0; j < i; j++){
			if(aa[i] == aa[j]) ok = 0;
		}
		if(ok) cout << aa[i] << " ";
 	}
}
int main(){
	string a, b; 
	getline(cin, a);
	getline(cin, b);
	solve(a, b);
}

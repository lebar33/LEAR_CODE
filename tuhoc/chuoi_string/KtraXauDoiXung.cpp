#include <iostream>
#include <string.h> 
using namespace std;
int symmetryCheck(string n){
	int l = 0, r = n.length()-1;
	while(l<=r){
		if(n[l]!=n[r]){
			return 0; 
		} 
		++l;
		--r; 
	} 
	return 1; 
}
int symmetryCheck2(string n){
	int l =0, r = n.length()-1, cnt = 0;
	while(l <= r){
		if(n[l]!=n[r]) ++cnt;
		l++; r--; 
	} 
	if(n.length() % 2 == 0 && cnt ==1) return 1;
	if(n.length() % 2 == 1 && cnt <=1) return 1;
	return 0; 
} 
int main(){
	string n; cin >> n;
	cout << symmetryCheck2(n); 
} 

#include <iostream>
#include <string.h>
#include <sstream>
using namespace std;
string tuBiLap(string n){
	stringstream ss(n);
	string a[20], tmp;
	int k =0;
	while(ss >> tmp){
		a[k] = tmp;
		++k; 
	} 
	int cnt = 0;
	for(int i = 0; i < k; i++){
		for(int j = 0; j < i; j++){
			if(a[i] == a[j]) ++cnt; 
		} 
		if(cnt != 0) {
			return a[i]; 
		} 
	} 
	return "-1"; 
} 
int main(){
	string n; getline(cin, n) ;
	cout << tuBiLap(n); 
} 

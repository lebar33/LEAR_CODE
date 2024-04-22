#include <iostream>
#include <string.h> 
#include <sstream> 
using namespace std;
int tach(string n){
	stringstream ss(n);
	string tmp;
	int cnt = 0; 
	while(ss >> tmp){
		++cnt; 
	} 
	return cnt ; 
} 
int checkUpper(string n){
	for(int i = 0; i < n.length(); i++){
		if(n[i] < 'A' || n[i] > 'Z' ) return 0; 
	} 
	return 1; 
}
void seprerateUpper(string n){
	stringstream ss(n);
	string tmp;
	while(ss >> tmp){
		if(checkUpper(tmp)) cout << tmp << " "; 
	} 
} 
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t){
		string n; getline(cin, n) ;
		seprerateUpper(n);
		cout << endl;
	} 
	return 0; 
} 

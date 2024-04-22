#include <iostream>
#include <string.h> 
#include <sstream> 
using namespace std;
int main(){
	string n;
	getline(cin, n);
	stringstream ss(n);
	string tmp;
	int cnt = 0; 
	while(ss >> tmp){
		++cnt; 
	} 
	cout << cnt << endl ; 
	return 0; 
} 

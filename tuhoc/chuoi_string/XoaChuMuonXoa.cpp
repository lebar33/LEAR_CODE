#include <iostream>
#include <string.h>
#include <sstream>
using namespace std;
string strlwr(string n ){
	for(int i =0; i < n.length(); i++){
		n[i] = tolower(n[i]);
	}
	return n;
}
void deleteString(string n, string x){
	strlwr(n);
	string a[20];
	int k = 0;
	stringstream ss(n);
	string tmp;
	while(ss >> tmp){
		if(tmp != x) a[k] = tmp; ++k;
	}
	for(auto x : a) cout << x << " ";
}
int main(){
	string n, x; getline(cin, n);
	cin >> x;
	deleteString(n, x);
	return 0;
}

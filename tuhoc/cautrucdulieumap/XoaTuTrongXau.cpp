#include <iostream>
#include <string.h>
#include <sstream>
using namespace std;

void xoaTuTrongXau(string n, string x){
	stringstream ss(n);
	string tmp;
	string a[20];
	int k = 0;
	while(ss >> tmp){
	    if(tmp != x){
		    a[k] = tmp;
		    k++;
	    }		
	}
	for(auto x : a){
		cout << x << " ";
	}
}

int main(){
    string n, x; getline(cin, n);
    cin >> x;
	xoaTuTrongXau(n, x);	
}

#include <iostream>
#include <string.h>
#include <sstream>
#include <map>
using namespace std;
string strlwr(string n){
	for(int i = 0; i < n.length(); i++){
		n[i] = tolower(n[i]);
	}
	return n;
}
void TSXH1(string n){
	n = strlwr(n);
	stringstream ss(n);
	string tmp;
	string a[20];
	int k = 0;
	while(ss >> tmp){
		a[k] = tmp;
		k++	;
	}
	int check[k] = {0};
	for(int i = 0; i < k; i++){
		if(check[i] == 0){
			int d = 1;
			for(int j = i + 1; j < k; j++){
				if(a[i] == a[j]){
					++d;
					check[j] = 1;
				}
			}
			cout << a[i] << " " << d << endl;
		}
	}
	
}
void sortString(string a[], int k){
	for(int i = 0; i < k; i++){
		int idex = i;
		for(int j = i+ 1; j < k; j++){
			if(a[j].compare(a[idex])==-1){
				idex = j;
			}
		}
		swap(a[i], a[idex]);
	}
}
string TSXH2(string n){
	stringstream ss(n);
	string tmp;
	string a[20];
	int k = 0;
	while(ss >> tmp){
		a[k] = tmp;
		k++	;
	}
	sortString(a, k);
	int check[k] = {0};
	for(int i = 0; i < k; i++){
		if(check[i] == 0){
			int d = 1;
			for(int j = i + 1; j < k; j++){
				if(a[i] == a[j]){
					++d;
					check[j] = 1;
				}
			}
			cout << a[i] << " " << d << endl;
		}
	}
}
int main(){
    string n; getline(cin, n);
	TSXH2(n);	
}

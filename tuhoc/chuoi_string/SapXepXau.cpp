#include <iostream>
#include <string.h>
#include <sstream>  
using namespace std;
void stringSort(string n){
	string a[20]; 
	stringstream ss(n);
	string tmp;
	int k = 0;  
	while(ss >> tmp){
		a[k] = tmp;
		++k;
	}
	for(int i = 0; i < k; i++){
		int idex = i;
		for(int j = i + 1; j < k; j++) {
			if(a[i].compare(a[j]) == 1){
				idex = j; 
			}
		}
		swap(a[i], a[idex]); 
	}
	for(auto x : a){
		cout << x << " "; 
	} 
} 
int main(){
	string n;
	getline(cin, n) ;
	stringSort(n); 
} 
 

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
			if(a[j].length() != a[idex].length()){
				if(a[j].length() < a[idex].length() ){
				    idex = j; 
			    }
			}
			else{
				if(a[idex].compare(a[j]) == 1){
				    idex = j; 
			    }
			} 
		}
		swap(a[i], a[idex]); 
	}
	for(auto x : a){
		cout << x << " "; 
	} 
} 
string sortCharacter(string n){ 
	for(int i = 0; i < n.length(); i++){
		int imin = i;
		for(int j = i+1; j < n.length(); j++){
			if(n[j] < n[imin]){
				imin = j; 
			} 
		} 
		swap(n[imin], n[i]); 
	}
	return n; 
} 
int main(){
	/*int n; cin >> n;
	cin.ignore();
	while(n--){
		string s;
		getline(cin, s);
		stringSort(s);
		cout << endl;
	}*/
	int n; cin >> n;
	while(n){
		string s; cin >> s;
		cout << sortCharacter(s) << endl; 
	} 
} 
 

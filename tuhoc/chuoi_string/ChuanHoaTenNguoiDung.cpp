#include <iostream>
#include <string.h>
#include <sstream>
using namespace std; 
void chuanHoa(string s){
	int k = 0;
	string a[20];
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		a[k] = tmp;
		k++; 
	}  
	for(int i = 0; i < k; i++){
		a[i][0] = toupper(a[i][0]);
		for(int j =1; j < a[i].length(); j++ ){
			a[i][j] = tolower(a[i][j]); 
	    } 
	}
	for(auto x : a){
		cout << x << " "; 
	} 
} 
void inTenTruoc(string s){
	int k = 0;
	string a[20];
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		a[k] = tmp;
		k++; 
	}  
	for(int i = 0; i < k; i++){
		a[i][0] = toupper(a[i][0]);
		for(int j =1; j < a[i].length(); j++ ){
			a[i][j] = tolower(a[i][j]); 
	    } 
	}
	cout << a[k-1] << ", ";
	for(int i = 0; i < k - 1; i++){
		cout << a[i] << " "; 
	} 
} 
string strupr(string a){
	for(int i = 0; i < a.length(); i++ ){
		a[i] = toupper(a[i]); 
	}
	return a; 
} 
void inHoaTen(string s){
	int k = 0;
	string a[20];
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		a[k] = tmp;
		k++; 
	}  
	for(int i = 0; i < k; i++){
		if(i == k - 1 ){
		    a[k-1] = strupr(a[k-1]); 
		} 
		else{
			a[i][0] = toupper(a[i][0]);
		    for(int j =1; j < a[i].length(); j++ ){
			    a[i][j] = tolower(a[i][j]); 
	        }
		}
	}
	cout << a[k-1] << ", ";
	for(int i = 0; i < k - 1; i++){
		cout << a[i] << " "; 
	} 
} 
int main(){
	string s; getline(cin, s) ;
	inHoaTen(s); 
} 

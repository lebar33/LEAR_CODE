#include <iostream>
#include <string.h> 
using namespace std;
int cnt[10001] = {0};  
void dt(string n){
	for(int i = 0; i < n.length(); i++) {
		if(isdigit(n[i])){
			int heso = 0; 
		    while(i < n.length() && isdigit(n[i])){
			    heso = heso*10 + (int)(n[i] - '0');
			    ++i; 
		    }
		    i+=3;
		    int mu = 0; 
		    while(i < n.length() && isdigit(n[i])){
			    mu = mu*10 + (int)(n[i] - '0');
			    ++i; 
		    }
		    cnt[mu] += heso;
	    }
	}
} 

int main(){
	string a, b;
	getline(cin, a);
	getline(cin, b);
	memset(cnt, 0, sizeof(cnt)); 
	dt(a); dt(b);
	int d = 0;
	for(int i =10000; i >= 0; i--){
		if(cnt[i]) ++d; 
	} 
	for(int i = 10000; i >= 0; i--){
		if(cnt[i] != 0){
			cout << cnt[i] << "*x^" << i;
			--d;
			if(d != 0) cout << " + ";  
		} 
	}
	cout << "\n"; 
	return 0; 
} 

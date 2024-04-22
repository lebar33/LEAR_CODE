#include <iostream>
#include <math.h> 
using namespace std;


int main(){
	int t; cin >> t;
	while(t--){
		int n ; cin >> n;
		if(n%4 == 0) cout << "6\n";
		if(n%4 == 1) cout << "8\n";
		if(n%4 == 2) cout << "4\n";
		if(n%4 == 3) cout << "2\n";
	}
	return 0;
} 

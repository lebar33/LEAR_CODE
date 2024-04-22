#include <iostream>
#include <math.h> 
using namespace std;
void solve(long long n){
	int n2 = 0, n3 = 0, n5 = 0, n7 = 0;
	while(n){
		int r = n % 10 ;
		if(r == 2) ++n2;
		else if(r == 3) ++n3;
		else if(r == 5) ++n5;
		else if(r == 7) ++n7;
		n /= 10; 
	} 
	if(n2 != 0) cout << "2 " << n2 << endl;
	if(n3 != 0) cout << "3 " << n3 << endl;
	if(n5 != 0) cout << "5 " << n5 << endl ;
	if(n7 != 0) cout << "7 " << n7 << endl; 
} 
int main(){
    long long n; cin >> n;
	solve(n); 
} 

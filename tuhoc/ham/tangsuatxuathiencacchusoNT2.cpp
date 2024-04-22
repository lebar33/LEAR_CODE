#include <iostream>
#include <math.h> 
using namespace std;
long long reverseNum(long long n){
	long long r = 0; 
	while(n){
		r = r*10 + n%10;
		n/=10; 
	} 
	return r; 
} 
void solve(long long n){
	int n2 = 0, n3 = 0, n5 = 0, n7 = 0;
	int m = reverseNum(n); 
	while(n){
		int r = n % 10 ;
		if(r == 2) ++n2;
		else if(r == 3) ++n3;
		else if(r == 5) ++n5;
		else if(r == 7) ++n7;
		n /= 10; 
	} 
	while(m){
		int r = m % 10;
		if(n2 != 0 && r == 2) {
		    cout << "2 " << n2 << endl;
		    n2 = 0;
		}
	    else if(n3 != 0 && r == 3) {
		    cout << "3 " << n3 << endl;
		    n3 = 0; 
		}
	    else if(n5 != 0 && r == 5) {
		    cout << "5 " << n5 << endl ;
		    n5 = 0;
		}
	    else if(n7 != 0 && r == 7) {
		    cout << "7 " << n7 << endl;
		    n7 = 0;
		}
	    m/=10; 
	}
} 
int main(){
    long long n; cin >> n;
    solve(n); 
} 

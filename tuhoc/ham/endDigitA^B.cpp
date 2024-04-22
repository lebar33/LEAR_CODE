#include <iostream>
#include <math.h> 
#include <algorithm>
using namespace std;
int solve(string a, string b){
	int ca = a[a.length() - 1] - '0', cb = 0;
    if(b.length() == 1) cb = b[b.length() - 1] - '0'; 
    else cb = (b[b.length() - 2] - '0')*10 + b[b.length() - 1] - '0';
	if(ca == 0 || ca == 1 || ca == 5 || ca == 6) return ca;
	return (int)(pow(ca,(cb%4))) % 10;
}
int main(){
	int t; cin >> t;
	while(t--){
		string a, b; cin >> a >> b;
		cout << solve(a, b) << endl; 
	}
	return 0;
} 

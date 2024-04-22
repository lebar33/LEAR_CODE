#include <iostream>
#include <string.h> 
using namespace std;
int solve(string s){
	int l = s.length();
	int mu = 1, sum = 0;
	for(int i = l - 1; i >= 0; i--){
		sum += (s[i] - '0')*mu;
		mu*=2;
		mu%=10;
		sum%=10; 
	} 
	cout << sum << endl;
	if(sum % 5 == 0) return 1; 
	return 0; 
}
int main(){
	string n; cin >> n;
	cout << solve(n); 
} 

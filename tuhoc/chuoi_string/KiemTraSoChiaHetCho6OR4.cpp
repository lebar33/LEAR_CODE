#include <iostream>
#include <string.h> 
using namespace std;
int chiaHetCho6(string s){
	int sum = 0;
	int n = s.length();
	if((s[n-1] - '0') %2 != 0) return 0;
	for(int i = 0; i < s.length(); i++){
		sum+= s[i] - '0';
	}
	if(sum % 3 != 0) return 0;
	return 1;
}
int chiaHetCho4(string s){
	if(s.length() == 1){
		if(s != "4" && s!= "8") return 0;
	}
	if(s.length() != 1){
	    int n = s.length();
	    int val = (s[n-2] - '0')*10 + (s[n-1] - '0');
	    if(val % 4 != 0) return 0;
    }
    return 1;
}
int main(){
	int n; cin >> n;
	while(n--){
		string s; cin >> s;
		if(chiaHetCho4(s) ) cout << "YES\n";
		else cout << "NO\n";
	}
} 

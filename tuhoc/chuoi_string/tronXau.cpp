#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
void mergeStr(string s1, string s2, string s12, int n){
	int j = 0;
	for(int i = 0; i < n; i++){
		s12[j++] = s2[i]; s12[j++] = s1[i]; 
	} 
} 
void tach(string s1, string s2, string s12, int n) {
	int j = 0;
	for(int i = 0; i < n; i++) s1[i] = s12[j++];  
	for(int i = 0; i < n; i++) s2[i] = s12[j++]; 
}
int solve(string s1, string s2, string s12, int n){
	int cnt = 0; 
	string tmp = "", t1 = s1, t2 = s2; 
	while(1){
		cnt++;
		mergeStr(s1, s2, tmp, n);
		if(s12 == tmp) return cnt;
		tach(s1, s2, s12, n);
		if(s1 == t1 && s2 == t2) return -1; 
	}
} 
int main(){
	string s1, s2, s12;
	int n;
	cin >> n >> s1 >> s2 >> s12;
	cout << solve(s1, s2, s12, n) ;
	return 0; 
} 

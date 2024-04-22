#include <iostream>
#include <string.h>
using namespace std;
int maxArray(int a[], int n){
	int ans = -1e9;
	for(int i = 0; i < n; i++){
		if(ans < a[i]){
			ans = a[i];
		}
	}
	return ans;
}
int fullString(string n){
	int l = n.length();
	int L[l] = {1};
	for(int i = 0; i < l; i++){
		for(int j = 0; j < i; j++){
			if(n[i] > n[j]) {
				L[i] = max(L[i], L[j] + 1);
			}
		}
	}
	int ans = 26 - maxArray(L, l);
	return ans;
}
int sortStone(string n){
	int cnt = 0;
	for(int i = 1; i < n.length(); i++){
		if(n[i] == n[i-1]) ++cnt; 
	} 
	return cnt; 
} 
int main(){
	int n; 
	string s;
	cin >> n;
	cin.ignore();
    getline(cin, s); 
	cout << sortStone(s);
	return 0;
}

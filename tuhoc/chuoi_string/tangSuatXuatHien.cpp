#include<iostream>
#include<string.h> 
using namespace std;
char bai6(string n){
	int cnt[256] = {0};
	for(int i = 0; i < n.length(); i++){
		cnt[(int)n[i]]++; 
	}
	int max1 = 0; 
	char ans;
	for(int i = 0; i < 256;i++){
		if(max1 <= cnt[i]){
			max1 = cnt[i];
		    ans = (char)i; 
		}  
	} 
	return ans; 
} 
void bai7(string a, string b){
	int c[256] = {0};
	for(int i = 0; i < a.length(); i++){
		c[(int)a[i]] = 1; 
	} 
	for(int i = 0; i < b.length(); i++){
		if(c[(int)b[i]]) {
			c[(int)b[i]] = 2; 
		}  
	} 
	for(int i = 0; i < 256; i++){
		if(c[i] == 2){
			cout << (char)i << " "; 
		} 
	} 
} 
void bai8(string a, string b){
	int c[256] = {0};
	for(int i = 0; i < a.length(); i++){
		c[(int)a[i]] = 1; 
	} 
	for(int i = 0; i < b.length(); i++){
		if(c[(int)b[i]]) {
			c[(int)b[i]] = 2; 
		}  
	} 
	for(int i = 0; i < 256; i++){
		if(c[i] == 1){
			cout << (char)i << " "; 
		} 
	} 
}
int main(){
    string a,b ;
    getline(cin, a);
	cin.ignore(0);
	getline(cin, b); 
    bai7(a, b); 
	return 0; 
} 

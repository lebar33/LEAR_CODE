#include <iostream>
#include <map>
#include <vector> 
using namespace std;
int main(){
	map<int,vector<int>> mp2;
	map<int,int> mp1 ;
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		mp1[x]++;
		mp2[x].push_back(i+1); 
	}
	cout << "Co " << mp1.size() << " gia tri nguyen trong mang.\n";
	cout << "So lan xuat hien gia tri cua cac phan tu trong mang :\n"; 
	for(auto x : mp1){
		cout << x.first << " : " <<  x.second <<endl; 
	}
	cout << "Cac gia tri khac nhau cua mang va cac vi tri xuat hien cua chung :\n";
	for(auto x: mp2){
		cout << x.first << ": ";
		for(auto y : x.second){
			cout << y << " "; 
		}
		cout << endl; 
	} 
	return 0; 
} 

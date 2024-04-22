#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v;
	v.push_back(12);
	v.push_back(8);
	v.push_back(21);
	for(int i=0;i<v.size();i++){
		cout << v[i] << endl;
	}
	for(vector<int>::iterator it = v.begin();it != v.end() ;++it){
		cout << *it << endl;
	}
    cout << v[2] << endl;
	cout << *(v.rbegin()+2) << endl; 
} 

#include <iostream>
#include <map>
using namespace std;
// cú pháp : map<datatype1,datatype2> mp;
// (key,value) 
int main(){
	map<int,int> mp; 
	int n; cin>>n;
	int a[n]; 
	for (int i=0;i<n;i++){
	    cin>>a[i];
		mp[a[i]]++; 
	} 
	for(int i=0; i<n; i++){
		if(mp[a[i]] != 0){
		    cout << a[i] << " " << mp[a[i]] << endl;
			mp[a[i]]=0;
		}
	} 
	return 0; 
} 
 

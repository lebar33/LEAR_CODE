#include <iostream>
#include <map>
using namespace std;
// cú pháp : map<datatype1,datatype2> mp;
// (key,value) 
int main(){
	map<int,int> mp;
	mp.insert({100, 200}) ;
	mp.insert({200, 200}) ;
	cout << mp.size()<< endl ;
	mp.erase(200); 
	for(map<int,int> :: iterator it=mp.begin(); it != mp.end(); it++){
		cout << it->first << " " << it->second << endl;  
	}
	if(mp.find(200) != mp.end() )cout << "found\n" ; // || mp.count(200) != 0  
	else cout << "not found\n" ; 
	return 0; 
} 
 

#include <bits/stdc++.h>
#include <set >
// multiset <int> bien  : giong nhu set nhung nó có the cho phép các phan tu giong nhau  
using namespace std;
// s.count(n) chinh la so  luong cua phan tu n  
int main(){
	set<int > s;
	for(int i=0;i<3 ;i++){
		int x; cin>>x;
		s.insert(x);
	}
	if(s.find(5 ) !=s.end()){  // s.count(5) != 0 iterator  
		cout << "FOUND!"<<endl; 
	}
	else cout << "NOT FOUND " << endl;
	s.erase(2); // xoa toan bo phan tu 2 
	/* trong multiset 
	muon xoa 1 phan tu ma phan tu do co nhieu gia tri giong nhau bang cach :
	auto it = s.find(x);
	s.erase(it );
	*/ 
    if(s.count(5)!=0){ // sp luong cua phan tu do khac 0   
    	cout <<"still found "<<endl; 
	} 
	else cout<<"not found"<<endl;
	for ( set<int> ::iterator it = s.begin(); it != s.end(); it ++){
		cout << *it << " " ; 
	} 
	cout << *(s.rbegin()) << endl; // in ra phan tu lon nhat s.end() là phan tu sau phan tu lon nhat  
	auto it = s.find(5); 
	cout << distance(s.begin(), it) << endl; // khoang cách tu phan tu dau tien den phan tu thu it  
	return 0; 
} 

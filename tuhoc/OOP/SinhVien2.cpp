#include <iostream>
#include <algorithm> 
#include <vector> 
#include <map> 
using namespace std;
using ll = long long ;

ll gcd(ll a, ll b){
	if(b == 0) return a;
	return gcd(b, a%b); 
}  

class SinhVien{
	private :
	    string id, ten, lop, email;
	public :
	    SinhVien(){
	    	id = ten = lop = email = " ";
		}
		friend void nhap(SinhVien& ); 
		friend void in(SinhVien ) ;
		friend istream& operator >>(istream& in, SinhVien& a);
		friend ostream& operator << (ostream& out, SinhVien a); 
		string getlop(){
			return this->lop; 
		} 
		string getid(){
			return this->id; 
		} 
		bool operator < (SinhVien a){
			return this->id < a.id; 
		} 
}; 
ostream& operator << (ostream& out, SinhVien a){
	out << a.id << " " << a.ten << " " << a.lop << " " << a.email << endl; 
	return out; 
}
istream& operator >>(istream& in, SinhVien& a){
	in >> a.id; in.ignore() ;
	getline(in, a.ten);
	in >> a.lop >> a.email;
	return in;  
}
bool cmp(SinhVien a, SinhVien b){
	return a.getlop() < b.getlop();
}
int main(){
	int n ; cin >> n;	
	map<string, vector<SinhVien>> mp; 
	for(int i = 0; i < n; i++) {
		SinhVien tmp; cin >> tmp;
		mp[tmp.getlop()].push_back(tmp); 
	}
	int q; cin >> q;
	while(q--){
		string s; cin >> s;
		cout << "Danh sach sinh vien thuoc lop " << s << " : " << endl;
		for(auto x : mp[s]){
			cout << x; 
		} 
	} 
	return 0; 
}

 

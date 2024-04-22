#include <iostream>
#include <algorithm> 
#include <vector> 
#include <map> 
#include <sstream> 
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
string upper(string n){
	for(int i = 0; i < n.length(); i++){
		n[i] = toupper(n[i]); 
	} 
	return n; 
} 
string tach(string n){
	stringstream ss(n);
	vector<string> v;
	string tmp, ans = "";
	while(ss >> tmp) v.push_back(tmp);
	for(int i = 0; i < 2; i++){
		ans+=toupper(v[i][0]); 
	} 
	return ans; 
} 
int main(){
	int n ; cin >> n;	
	map<string, vector<SinhVien>> mp; 
	for(int i = 0; i < n; i++) {
		SinhVien tmp; cin >> tmp;
		string s = tmp.getlop().substr(0,2); 
		mp[s].push_back(tmp); 
	}
	int q; cin >> q;
	cin.ignore() ;
	while(q--){
		string s; getline(cin, s); 
		cout << "Danh sach sinh vien thuoc nganh " << upper(s) << " : " << endl;
		string p = tach(s); 
		if(p == "CN" || p == "AT"){
			for(auto x : mp[p]){
				if(x.getid().find("h") == string::npos) cout << x; 
			} 
		}
		else {
			for(auto x : mp[p]){
				cout << x; 
			} 
		} 
	} 
	return 0; 
}

 

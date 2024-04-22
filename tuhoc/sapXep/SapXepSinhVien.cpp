#include <iostream>
#include <algorithm>
#include <string.h> 
#include <sstream> 
using namespace std;
class sinhvien
{
	private:
	   string id, ten, ns;
	public:
		sinhvien(){
	    	id = ten = ns = ""; 
		}
		string getId(){return id;}
		string getTen(){return ten;}
		string getNs(){return ns;}
	    friend istream& operator>>(istream& in, sinhvien& a);
	    friend ostream& operator<<(ostream& out, sinhvien a); 
};
istream& operator >>(istream& in, sinhvien& a){
    in >> a.id; cin.ignore();  	
    getline(in, a.ten);
	cin >> a.ns ;
	return in; 
} 
ostream& operator <<(ostream& out, sinhvien a){
	out << a.id << " " <<a.ten<< " " << a.ns;
	return out;
}	
string tachten(string a){
	stringstream ss(a);
	string tmp;
	while(ss >> tmp){
	} 
	return tmp; 
} 
bool cmp1(sinhvien a, sinhvien b){
	return a.getId() < b.getId();
}
bool cmp2(sinhvien a, sinhvien b){
	string s1 = tachten(a.getTen()), s2 = tachten(b.getTen());
	if(s1 == s2) return a.getNs() < b.getNs();
	return s1 < s2;
} 
int main(){
	int n; cin >> n;
	sinhvien a[10];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		cout << a[i] << endl;
	}
	cout << endl; 
	sort(a, a+n, cmp2);
	for(int i = 0; i < n; i++){
		cout << a[i] << endl; 
	}  
	return 0;
} 

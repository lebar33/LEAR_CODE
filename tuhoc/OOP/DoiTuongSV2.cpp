#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <algorithm> 
using namespace std;
string chuanhoa(string a){
	stringstream ss(a);
	string tmp;
	string ans = ""; 
	while(ss >> tmp){
		ans += toupper(tmp[0]);
		for(int i = 1; i < tmp.length(); i++){
			ans+=tolower(tmp[i]); 
		}
		ans+=" "; 
	}
	ans.erase(ans.length()-1);
	return ans; 
} 
class SinhVien{
	private :
	    string mssv, Hoten, lop, NgaySinh;
	    float gpa;
	    static int cnt; 
	public :
	    SinhVien(){
	    	mssv = Hoten = lop = NgaySinh = " ";
			gpa = 0; 
		}
		SinhVien(string ten, string lop, string ns, double gpa){
			ten = ten;
			this->lop = lop;
			NgaySinh = ns;
			this->gpa = gpa ;
		} 
		friend void nhap(SinhVien& ); 
		friend void in(SinhVien ) ;
		friend istream& operator >>(istream& in, SinhVien& a);
		friend ostream& operator << (ostream& out, SinhVien a);
		bool operator < (SinhVien a){
			return this->gpa > a.gpa; 
		} 
		 
};
istream& operator >>(istream& in, SinhVien& a){
	SinhVien::cnt++; 
	string tmp = to_string(SinhVien::cnt);
	tmp = string(3 - tmp.size(), '0') + tmp; 
	a.mssv = "B20DCCN" + tmp;
	cin.ignore();  
	getline(in, a.Hoten); 
	in >> a.lop >> a.NgaySinh >> a.gpa ;
	a.Hoten = chuanhoa(a.Hoten); 
	if(a.NgaySinh[2] != '/') a.NgaySinh = "0" + a.NgaySinh;
	if(a.NgaySinh[5] != '/') a.NgaySinh.insert(3, "0"); 
	return in; 
}
ostream& operator << (ostream& out, SinhVien a){
	out << a.mssv << " " << a.Hoten << " " << a.lop << " " << a.NgaySinh << " " << fixed << setprecision(2) << a.gpa << endl; 
	return out; 
}
int SinhVien::cnt = 0; 
int main(){
	SinhVien a[50];
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i]; 
	} 
	sort(a, a+n); 
	for(int i = 0; i < n; i++){
		cout << a[i]; 
	} 
	return 0; 
}

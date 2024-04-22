#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
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
		 
};
istream& operator >>(istream& in, SinhVien& a){
	SinhVien::cnt++; 
	string tmp = to_string(SinhVien::cnt);
	tmp = string(3 - tmp.size(), '0') + tmp; 
	a.mssv = "B20DCCN" + tmp;
	cin.ignore();  
	getline(in, a.Hoten); 
	in >> a.lop >> a.NgaySinh >> a.gpa ;
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
	for(int i = 0; i < n; i++){
		cout << a[i]; 
	} 
	return 0; 
}

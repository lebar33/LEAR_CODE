#include <iostream>
#include <iomanip> 
using namespace std;
using ll = long long ;
class SinhVien{
	private :
	    string mssv, Hoten, lop, NgaySinh;
	    float gpa;
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
	a.mssv = "B20DCCN01";
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
int main(){
	return 0; 
} 

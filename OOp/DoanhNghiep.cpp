#include <iostream>
#include <string.h>
#include <algorithm> 
using namespace std;
class DoanhNghiep
{
	private:
		string id, ten;
		int cntSV;
	public:
		DoanhNghiep(string id, string ten, int cntSV){
		    this->id = id;
			this->ten = ten;
			this->cntSV = cntSV; 
		};
		DoanhNghiep(){
			id = ten = " ";
			cntSV = 0; 
		} 
		string getId(){return id;} 
		string getTen(){return ten; }
		int getSoluong(){return cntSV;} 
		void nhap();
		void xuat();
};
void DoanhNghiep::nhap(){
	cin >> id; cin.ignore() ;
	getline(cin, ten); 
	cin >> cntSV;
} 
bool cmp(DoanhNghiep a, DoanhNghiep b){
	if(a.getSoluong() != b.getSoluong()){
		return a.getSoluong() > b.getSoluong(); 
	} 
	return a.getId() < b.getId(); 
} 
void DoanhNghiep::xuat(){
	cout << "| Doanh nghiep : " << id << ", " << ten<< ", " << "so luong sinh vien thuc tap: "<< cntSV << endl; 
} 
int main(){
	/* cau a 
	int n; cin >> n;
	DoanhNghiep a[n];
	for(int i =0; i < n; i++){
		a[i].nhap(); 
	}
	cout << "Doanh nghiep truoc khi sap xep :" << endl;
	for(int i = 0; i < n; i++){
		a[i].xuat(); 
	}
	cout << "Doanh nghiep sau khi sap xep :" << endl;
	for(int i = 0; i < n; i++){
		a[i].xuat(); 
	} 
	*/
	int n; cin >> n;
	DoanhNghiep a[n];
	for(int i =0; i < n; i++){
		a[i].nhap(); 
	}
	cout << "Cac doanh nghiep :" << endl;
	for(int i = 0; i < n; i++){
		a[i].xuat(); 
	}
	sort(a, a+n, cmp);
	int q; cin >> q;
	while(q--){
		int c, b;
		cin >> c >> b;
		cout << "Cac doanh nghiep co the nhan sinh vien nam trong khoang [" << c << "," << b << "] la :\n"; 
		for(int i = 0; i < n; i++){
			if(a[i].getSoluong() >= c && a[i].getSoluong() <= b) a[i].xuat(); 
		} 
	} 
	return 0; 
} 

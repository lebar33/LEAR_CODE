#include <iostream>
#include <string> 
using namespace std;
class Employee
{
	private:
	    string id, name, sex, bth, add, idTax, deal;
	public:
	    Employee(){
	    	id = "0001";
	    	name = sex = bth = add = idTax = deal = " "; 
		}
		friend istream& operator >>(istream& in, Employee &a);
		friend ostream& operator <<(ostream& out, Employee a);   
};
ostream& operator <<(ostream& out, Employee a){
	out << a.id << " " << a.name << " " << a.sex << " " << a.bth << " " << a.add << " " << a.idTax << " " << a.deal << endl;
	return out; 
}
istream& operator >>(istream& in, Employee &a){
	getline(in, a.name);
	in >> a.sex;
	in >> a.bth; in.ignore();
	getline(in, a.add);
	in >> a.idTax;
	in >> a.deal; 
	if(a.bth[2] != '/') a.bth = "0" + a.bth;
	if(a.bth[5] != '/') a.bth.insert(3, "0");
	if(a.deal[2] != '/') a.deal = "0" + a.deal;
	if(a.deal[5] != '/') a.deal.insert(3, "0");
	return in;
} 
#define a() a
int main(){
	Employee ds[50];
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		cin >> ds[i];
	}
	for(int i = 0; i < n; i++){
		cout << ds[i];
	}
} 

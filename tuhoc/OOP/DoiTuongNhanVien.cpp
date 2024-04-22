#include <iostream>
#include <string> 
#include <iomanip>
using namespace std;
class Employee
{
	private:
	    string id, name, sex, bth, add, idTax, deal;
	    static int cnt; 
	public:
	    Employee(){
	    	id = "0001";
	    	name = sex = bth = add = idTax = deal = " "; 
		}
		friend istream& operator >>(istream& in, Employee &a);
		friend ostream& operator <<(ostream& out, Employee a);   
};
int Employee::cnt = 0; 
ostream& operator <<(ostream& out, Employee a){
	out << a.id << " " << a.name << " " << a.sex << " " << a.bth << " " << a.add << " " << a.idTax << " " << a.deal << endl;
	return out; 
}
istream& operator >>(istream& in, Employee &a){
	Employee::cnt++;
	string tmp = to_string(Employee::cnt);
	a.id = string(6 - tmp.size(), '0') + tmp;
	cin.ignore();
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
	return 0;
} 

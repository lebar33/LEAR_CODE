#include <iostream>
#include <string> 
#include <iomanip> 
#include <algorithm>
using namespace std;
class Employee
{
	private:
	    string name, sex, bth, add, idTax, deal;
	    int id; 
	    
	public:
		static int cnt; 
	    string getBth() {return bth; }
		friend istream& operator >>(istream &in, Employee &a){
			++cnt;
	        a.id = cnt; 
	        in.ignore(); 
	        getline(in, a.name);
	        in >> a.sex >> a.bth; in.ignore();
	        getline(in, a.add);
	        in >> a.idTax >> a.deal; 
        	if(a.bth[2] != '/') a.bth = "0" + a.bth;
        	if(a.bth[5] != '/') a.bth.insert(3, "0");
        	if(a.deal[2] != '/') a.deal = "0" + a.deal;
        	if(a.deal[5] != '/') a.deal.insert(3, "0");
        	return in;
		}
	
		friend ostream& operator <<(ostream& out, Employee a){
			out << setfill('0') << setw(5) << a.id; //them 5 so 0 truoc id 
        	out << " " << a.name << " " << a.sex << " " << a.bth << " " << a.add << " " << a.idTax << " " << a.deal << endl;
        	return out; 
		}
		
		friend bool operator < (Employee a, Employee b){
			string s1 = a.bth, s2 = b.bth;
        	int t1 = (s1[0] - '0')*10 + s1[1] - '0', ng1 = (s1[3] - '0')*10 + s1[4] - '0', n1 = stoi(s1.substr(6));
        	int t2 = (s2[0] - '0')*10 + s2[1] - '0', ng2 = (s2[3] - '0')*10 + s2[4] - '0', n2 = stoi(s2.substr(6));
        	if(n1!=n2) return n1 > n2;
	        if(t1!=t2) return t1 < t2;
	        return ng1 < ng2;
		}
};
int Employee::cnt = 0; 
bool cmp(Employee a, Employee b){
	string s1 = a.getBth(), s2 = b.getBth();
    int t1 = (s1[0] - '0')*10 + s1[1] - '0', ng1 = (s1[3] - '0')*10 + s1[4] - '0', n1 = stoi(s1.substr(6));
    int t2 = (s2[0] - '0')*10 + s2[1] - '0', ng2 = (s2[3] - '0')*10 + s2[4] - '0', n2 = stoi(s2.substr(6));
    if(n1!=n2) return n1 > n2;
    if(t1!=t2) return t1 < t2;
	return ng1 < ng2;
}
void sapxep(Employee a[], int n){
	sort(a, a+n, cmp);
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
	sapxep(ds, n);
	for(int i = 0; i < n; i++){
		cout << ds[i];
	}
	return 0;
	
} 

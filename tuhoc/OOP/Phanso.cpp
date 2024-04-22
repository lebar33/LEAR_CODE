#include <iostream>
using namespace std ;
using ll = long long ;

ll gcd(ll a, ll b){
	if(b == 0) return a;
	return gcd(b, a%b); 
}  
class Phanso {
	private :
	    ll tu, mau;
	public : 
	    Phanso(ll , ll );
		friend istream& operator >>(istream& in, Phanso& a);
		friend ostream& operator <<(ostream& out, Phanso a);
		Phanso operator + (Phanso a); 
		void rutgon(); 
}; 
Phanso::Phanso(ll tu, ll mau){
	this->tu = tu;
	this->mau = mau; 
} 

istream& operator >>(istream& in, Phanso& a){
	cout << "Nhap tu so : ";
	in >> a.tu;
	cout << "Nhap mau so : ";
	in >> a.mau; 
	return in; 
}
void Phanso::rutgon(){
	ll c = gcd(this->tu, this->mau);
	this->tu/=c;
	this->mau/=c; 
}
ostream& operator <<(ostream& out, Phanso a){
	out << a.tu << "/" << a.mau << endl;
	return out; 
}

Phanso Phanso::operator + (Phanso a){
	Phanso t(1,1);
	t.tu = this->tu*a.mau + a.tu*this->mau ;
	t.mau = this->mau*a.mau;
	ll g = gcd(t.tu, t.mau);
	t.tu/=g;
	t.mau/=g; 
	return t; 
} 
int main(){
	Phanso p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q; 
	return 0; 
} 

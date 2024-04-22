#include <iostream>
#include <math.h>
#include <sstream>
using namespace std;
// truy cap ki tu thong qua chu so
// length()
// size()
// a.compare(b) : so sanh thu tu trong bang ki tu neu a nho hon b thi in ra -1, = nhau thi 0, lon hon thi 1
// getline(cin, bienstring) nhap vao co khoang cach
/* coppy tu ki tu thu 2 them 3 ki tu string a = "abcdef";
	string b = a.substr(2,3) ; */
//stoi : ham chuyen xau thanh so nguyen int
// stoll : ---------------------------- long long
// to_string : chuyen so nguyen thanh chuoi
int main(){
    string s = "java python    php lap   trinh";
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){ // tách chuoi s ra thanh tung chu : java, python, php, lap, trinh 
    	cout << tmp << endl;
	}
	return 0;
}

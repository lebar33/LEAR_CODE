#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int fn=1;
	int fs=1;
	int ft=1;
	if (n<=2){
		cout << " fn = " << fn;
	}
	else{
		cout << "Day Fibonancci la :" << endl;
		cout << "1\n"<< "1\n" ;
		for (int i=2;i<n;i++){
			fn=ft+fs;
			fs=ft;
			ft=fn;
			cout << fn << endl;
		}
	}
	return 0;
}

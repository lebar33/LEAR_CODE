#include <iostream>
#include <math.h> 
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int& x : a) cin >> x;
	for(int i = 0; i < n - 1; i++){
		bool ok = false;
		for(int j = 0; j < n - i - 1; j++){
			if(a[j] > a[j + 1]){
				swap(a[j], a[j+1]);
				ok = true;
			}
		}
		if(ok){
			cout << "Buoc " << i + 1 << ": ";
		}
		else break;
		for(int i = 0; i < n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
} 

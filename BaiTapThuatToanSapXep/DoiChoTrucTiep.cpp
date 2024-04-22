#include <iostream>
#include <math.h> 
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int& x : a) cin >> x;
	for(int i = 0; i < n-1; i++){
		int mini = i; 
		for(int j = i+1; j < n; j++){
			if(a[mini] > a[j]) {
				mini = j; 
			}
		}
		swap(a[i], a[mini]);
		cout << "Buoc " << i + 1 << " :";
		for(int x : a) cout << x << " ";
		cout << endl; 
	} 
	return 0;
} 

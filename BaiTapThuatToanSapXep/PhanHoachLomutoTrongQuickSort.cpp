#include <iostream>
#include <math.h> 
using namespace std;
void partition(int a[], int l, int r){
	int pivot = a[r];
	int i = l - 1, j = l;
	for(int j = l; j < r; j++){
		if(a[j] < pivot){
			++i;
			swap(a[i], a[j]);
		}
	}
	++i; swap(a[i], a[r]);
	for(int j = l; j <= r; j++){
		if(j == i) cout << "[" << a[i] << "]" << " ";
		else cout << a[j] << " ";
	}
	cout << endl;
}
int main(){
	int n; cin >> n ;
	int a[n];
	for(int& x : a) cin >> x;
	partition(a, 0, n - 1);
	return 0;
} 

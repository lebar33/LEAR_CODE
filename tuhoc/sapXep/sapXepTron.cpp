#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int merge(int a[], int l, int m, int r){
	vector<int> x(a+l, a + m + 1);
	vector<int> y(a + m + 1, a + r + 1);
	int i = 0, j = 0;
	int dem = 0; 
	while(i < x.size() && j < y.size()){
		if(x[i] <= y[j]){
			a[l] = x[i];
			++l; ++i; 
		} 
		else{
			dem += x.size() - i; 
			a[l] = y[j];
			++l; ++j; 
		} 
	}
	while(i < x.size() ){
		a[l] = x[i]; ++l; ++i; 
	}
	while(j < y.size()){
		a[l] = y[j]; ++l; ++j; 
	} 
	return dem; 
} 
int mergeSort(int a[], int l, int r){
	int dem = 0; 
	if(l < r){
		int m = (l + r) / 2; 
	    dem += mergeSort(a, l, m);
	    dem += mergeSort(a, m + 1, r);
	    dem += merge(a, l, m, r);
	} 
	return dem; 
}
 
 
int main(){
	int n; cin >> n;
	int  a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
    }
    cout << mergeSort(a, 0, n - 1);
    
	return 0;
}

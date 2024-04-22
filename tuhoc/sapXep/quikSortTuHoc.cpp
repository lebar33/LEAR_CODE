#include <iostream>
#include <algorithm>
using namespace std;
int parttionLomuto(int a[], int l, int r){
	int pivot = a[r];
	int i = l - 1;
	for(int j = l; j < r; j++){
		if(a[j] <= pivot){
			++i;
			swap(a[i], a[j]);
		}
	}
	++i; swap(a[i], a[r]);
	return i;
} 
int parttionHoare(int a[], int l, int r){
	int pivot = a[l];
	int i = l - 1, j = r + 1;
	while(true){
		do{
			++i; 
		}while(a[i] < pivot);
		do{
			--j; 
		}while(a[j] > pivot) ;
		if(i < j){
			swap(a[i], a[j]); 
		} 
		else return j; 
	} 
}
void quickSort(int a[], int l, int r){
	if(l >= r) return;
	int p = parttionLomuto(a, l, r);
	quickSort(a, 0, p-1);
	quickSort(a, p+1, r);
}
void quickSort2(int a[], int l, int r){
	if(l >= r) return;
	int p = parttionHoare(a, l, r);
	quickSort2(a, l, p);
	quickSort2(a, p+1, r); 
} 
int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	quickSort2(a, 0, n-1);
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	return 0;
}

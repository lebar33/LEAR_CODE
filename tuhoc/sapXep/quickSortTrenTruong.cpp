#include <iostream>
#include <algorithm>
#include <fstream> 
#include <math.h> 
using namespace std;
void absArr(int a[], int n){
	for(int i = 0; i < n; i++){
		a[i] = abs(a[i]); 
	} 
} 
void QuickSort(int a[], int left, int right){  	  	
    int i = left, j = right, x; 
 	if (left >= right)return ; 
    x = a[(left+right)/2]; 
   	while(i < j) { 
      	while(a[i] < x){                   
			i++; 
        } 
        while(a[j] > x){                      
		    j--; 
        } 
        if(i <= j) {  
            swap(a[i], a[j]); 
            i++ ;                   
			j--; 
        }
    } 
    QuickSort(a, left, j); 
    QuickSort(a, i, right); 
} 
void in(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " "; 
	} 
} 
 
int main(){
	int a[12] = {12, 2, 15, -3, 8, 5, 1, -8, 6, 0, 4, 15}; 
	int n = 12; 
    cout << "Day tang dan: "; 
    QuickSort(a, 0, n - 1); 
    for(int i = 0; i < n; i++){
    	cout << a[i] << " "; 
	}
	cout << "\n So lon thu 3 trong day: " << a[9] ;
	int cnt = 0;
	for(int i = n - 1; a[i] == a[n-1]; i--){
		++cnt; 
	} 
	cout <<"\n So luong so lon nhat trong day: " << cnt << endl; 
	cout << "Day duoc sap xep theo gia tri tuyet doi tang dan: ";
	absArr(a, n);
	QuickSort(a, 0, n - 1);
	in(a, n); 
	return 0;
}
 

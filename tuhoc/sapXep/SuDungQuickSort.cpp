#include <iostream>
#include <algorithm>
#include<vector> 
using namespace std;
void QuickSortDe(int a[], int left, int right){  	  	
    int i = left, j = right, x; 
 	if (left >= right)return ; 
    x = a[(left+right)/2]; 
   	while(i < j) { 
      	while(a[i] > x){                   
			i++; 
        } 
        while(a[j] < x){                      
		    j--; 
        } 
        if(i <= j) {  
            swap(a[i], a[j]); 
            i++ ;                   
			j--; 
        }
    } 
    QuickSortDe(a, left, j); 
    QuickSortDe(a, i, right); 
} 
void QuickSortIn(int a[], int left, int right){  	  	
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
    QuickSortIn(a, left, j); 
    QuickSortIn(a, i, right); 
} 
void in(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " "; 
	} 
} 

void sort1(int a[], int n){
	int c = 0;
	QuickSortDe(a, 0, n-1); 
	while(c < n && a[c] > 0){
		c++; 
	} 
	QuickSortDe(a, 0, c-1);
	QuickSortIn(a, c, n-1); 
}
void sort2(int a[], int n){
	int l = -1; 
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			l++;
			swap(a[i], a[l]); 
		}
	} 
	QuickSortIn(a, 0, l);
	QuickSortDe(a, l+1, n - 1); 
} 
void inArr(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " "; 
	} 
} 
 
int main(){
	int a[12] = {12, 2, 15, -3, 8, 5, 1, -8, 6, 0, 4, 15}; 
	int n = 12; 
	cout << "Sap Xeo theo quy luat Duong Am: "; 
    sort1(a, n); 
    inArr(a, n); 
    cout << "\nSap xep theo quy luat chan le: "; 
    sort2(a, n);
	inArr(a, n); 
	return 0;
}

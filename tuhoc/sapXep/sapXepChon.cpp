#include <iostream>
#include <string.h> 
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;
void selectSort(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		int min_idex = i; 
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[min_idex]){
				min_idex = j; 
			}
		}
		swap(a[i], a[min_idex]) ;
	} 
} 
void bubbleSort(int a[], int n){
	for(int i = 0; i < n ; i++){ 
		for(int j = 0; j < n - i - 1; j++){
			if(a[j] > a[j + 1]){ 
			    swap(a[j], a[j + 1]) ;
			}
		}
	} 
} 
void insertionSort(int a[], int n){
	for(int i = 1; i < n ; i++){ 
		int x = a[i], pos = i - 1;
		while(pos >= 0 && x < a[pos]){
			a[pos + 1] = a[pos];
			pos--; 
		}  
		a[pos + 1] = x; 
	} 
} 
int cnt[10000001];
 
 
int main(){
	int n; cin >> n;
	int  a[n];
	/*// countingSort 
	int m = INT_MIN; 
	for(int i = 0; i < n; i++){
		cin >> a[i];
		cnt[a[i]]++; 
		m = max(m, a[i]); 
    }
    for(int i = 0; i <= m; i++){
    	if(cnt[i] != 0){
    		for(int j = 0; j < cnt[i]; j++){
    			cout << i << " "; 
			} 
		} 
	} */ 
	for(int i = 0; i <n; i++){
        cin>> a[i];
    }
    insertionSort(a,n);
	for(int i = 0; i <n; i++){
        cout << a[i] << " ";
    }
	return 0;
}

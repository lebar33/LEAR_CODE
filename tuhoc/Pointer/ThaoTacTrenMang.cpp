#include <iostream>
using namespace std;
void SortAIncreasing(int a[], int n){
	int *p, *q;
	p = a; 
	for(p = a; p < a + n; p++){
		for(q = p + 1; q < a + n; q++){
			if(*q < *p ){
				swap(*p, *q);
			} 
		}
	}
} 
void SortADecreasing(int a[], int n){
	int *p, *q;
	p = a; 
	for(p = a; p < a + n; p++){
		for(q = p + 1; q < a + n; q++){
			if(*q > *p ){
				swap(*p, *q);
			}
		}
	}
} 
int main(){
	int n; cin >> n;
	int a[n];
	int *p, *q, maxA = -1e9, ans = 0;
	p = a;
	for( p = a; p < a+n; p++){
		cin >> *p;
	}
	for(p = a + n - 1; p >= a; p--){
		cout << "Phan tu thu " << p - a + 1 << " : " << *p << endl;
	}
	for(p = a; p < a + n; p++){
		if(*p > maxA ){
			maxA = *p;
			ans = p - a ;
		} 
	} 
	cout << "Phan tu co gia tri lon nhat : " << maxA << ". Vi tri cua no la : " << ans << endl; 
	for(p = a; p < a + n; p++){
		for(q = p + 1; q < a + n; q++){
			if(*q < *p ){
				swap(*p, *q);
			} 
		}
	} 
	cout << "Phan tu mang a sau khi sap xep : ";
	for(p = a; p < a + n; p++){
		cout << *p << " "; 
	}
	cout <<endl <<  " Sap xep phan tu kieu khac : " ;
	SortAIncreasing(a, n); 
	for(p = a; p < a + n; p++) {
		if(*p < 0){
		    for(q = p + 1; q < a + n; q++){
			    if(*p < *q && *q < 0) {
				    swap(*p, *q); 
			    }
		    }
	    }
	    else break; 
	}
	for(p = a; p < a + n; p++){
		cout << *p << " " ; 
	}
	return 0; 
} 

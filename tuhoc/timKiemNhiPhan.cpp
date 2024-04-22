#include <iostream>
#include <algorithm>
using namespace std;
//linear serch O(n)
bool ls(int a[], int x, int n){
	for(int i = 0; i < n; i++){
		if(a[i] == x){
			return true;
		}
	}
	return false;
}

// Binary search  O(log n)
// Cac phan tu trong mang caan phai duoc sap xep tang dan, hoac giam dan
//10 3 
//1 2 3 4 5 6 7  8 9 10
bool bs(int a[], int x, int n){
	int l = 0, r = n - 1;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] = x){
		    return true;
		}
		else if(a[m] < x){
			l = m + 1;
		}
		else {
			r = m - 1;
		}
	}
	return false;
}
int first_pos(int a[], int x, int n){
	int l = 0, r = n - 1;
	int res = -1;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] == x){
			res = m  ;
			r = m - 1;
		}
		else if(a[m] < x){
			l = m + 1;
		}
		else {
			r = m - 1;
		}
	}
	
	return res;
}
int last_pos(int a[], int x, int n){
	int l = 0, r = n - 1;
	int res = -1;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] == x){
			res = m ;
			l = m + 1;
		}
		else if(a[m] < x){
			l = m + 1;
		}
		else {
			r = m - 1;
		}
	}
	return res;
}
// lower_bound(iter1, iter2, key) tim vi tri dau tien cua item >= key trong mang a
// upper_bound(iter1, iter2, key) tim vi tri dau tien cua item > key trong mang a


int main(){
	int n, x; cin >> n >> x;
	int a[n];
	for(int &x : a){
		cin >> x;
	}
	auto it = lower_bound(a, a + n, x); // tim vi tri dau tien cua item >= x trong mang a
	cout << *it << endl; // tra ve gia tri cua phan tu
	cout << it - a << endl; // tra ve chi so cua phan tu 
	if(it == (a+n)){ // neu ma iter cua x khong co trong doan tu a den a + n -1 thi khong ton tai a + n giong nhu a.end() neu a la vector
		cout << " Khong ton tai !" << endl;
	}
	return 0;
}

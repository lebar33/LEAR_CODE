#include <iostream>
#include <math.h> 
using namespace std;
void merge(int a[], int b[], int n, int m){
	int i = 0, j = 0, dem = 0;
	while(i < n && j < m){
		if(a[i] <= b[j]){
			cout << "b" << i+1 << " ";
			i++;
		}
		else {
			cout << "c" << j+1 << " ";
			j++;
		}
	}
	while(i < n){
		cout << "b" << i+1  << " ";
		i++;
	}
	while(j < m){
		cout << "c" << j+1 << " ";
		j++;
	}
}
int main(){
	int n, m; cin >> n >> m ;
	int a[n], b[m];
	for(int& x : a) cin >> x;
	for(int& x : b) cin >> x;
	merge(a, b, n, m);
	return 0;
} 

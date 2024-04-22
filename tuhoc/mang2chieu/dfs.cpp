#include <iostream>
using namespace std;
int x[4] = {-1, 0, 0, 1};
int y[4] = {0, -1, 1, 0};
int n, m, a[100][100]; 
int check = 0;
void dfs(int i, int j, int key1, int key2){
	cout << "Tham a["<< i <<"][" << j << "]" << " thanh cong!"<< endl; 
	a[i][j] = 0; 
	if(i == key1 && j == key2) check = 1;
	for(int k = 0; k < 4; k++){
		int i1 = i + x[k];
		int j1 = j + y[k];
		if(i1 >= 0 && i1 < m && j1 >= 0 && j1 <= n && a[i1][j1] ){
			dfs(i1,j1, key1, key2); 
		} 
	} 
} 
int main(){
	cin >> m >> n;
	int key1, key2; cin >> key1 >> key2; 
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j]; 
		} 
	} 
	cout << endl; 
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << a[i][j] << " ";
		} 
		cout << endl; 
	} 
	dfs(0, 0, key1, key2);
	if(check){
		cout << "Co the di toi o (" << key1 << ", " << key2 <<")" << endl; 
	}
	else {
		cout <<"Khong the di toi o (" << key1 << ", " << key2 <<")" << endl;
	} 
	return 0; 
} 

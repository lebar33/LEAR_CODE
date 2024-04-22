#include <iostream>
#include <math.h> 
#include <vector > 
using namespace std;


int main(){
	int tc; cin>> tc;
	while(tc--){
		int n, m; cin >> n >> m;
		int a[500][500];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			} 	
		}
		long long  summax = -1e18 ; 
		vector <int> row ; 
		for(int i = 0; i < n; i++){
			long long sumrow = 0 ; 
			for(int j = 0; j < m; j++){
				sumrow += a[i][j]; 
			}
			if(summax < sumrow ){
				summax = sumrow;
				row.clear();
				row.push_back(i) ;
			}
			else if ( summax == sumrow ){
			    row.push_back(i); 
			} 
		}
		cout << summax << endl;
		for (int i = 0; i < row.size(); i++){
			cout << row[i] + 1   << " "; 
		} 
		cout << endl; 
	}
	return 0; 
} 

#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

char a[100][100];
int n,m;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
void loag(int i, int j) {
	a[i][j] = 'v';
	for(int i = 0; i < 4; i++){
		int imoi = i + dx[i];
		int jmoi = j + dy[i]; 
		if(imoi >= 1 && imoi <= n && jmoi >= 1 && jmoi <= m && a[imoi][jmoi] == 'O'){
			loag(imoi, jmoi); 
		} 
	} 
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        cin >> n >> m;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> a[i][j];
            }
        }
        for (int i = 1; i <= n; i++) {
            if(a[i][1] == 'O') {  
			    loag(i, 1);
			}
			if(a[i][m] == 'O'){
			    loag(i, m); 
			}
        }
        for(int i = 1; i <= m; i++){
        	if(a[1][i] == 'O') {
			    loag(1, i);
			}
			if(a[n][i] == 'O') {
			    loag(n, i); 
		    }
		}
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if(a[i][j] == 'v') {
				    cout << "O ";
				}
				else {
				    cout << "X ";
				}
            }
            cout << endl; 
        }
        cout << endl; 
    }
    return 0;
}


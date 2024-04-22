#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int kad(int a[], int n) {
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++) {
        sum1 += a[i];
        sum2 = max(sum2, sum1);
        sum1 = max(sum1, 0);
    }
    return sum2;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        // Tính ma tr?n t?ng ti?n t? prefix_sum
        int prefix_sum[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                prefix_sum[i][j] = a[i][j];
                if (j > 0) {
                    prefix_sum[i][j] += prefix_sum[i][j - 1];
                }
            }
        }

        int ans = INT_MIN;
        for (int l = 0; l < m; l++) {
            for (int r = l; r < m; r++) {
                int tmp[n];
                for (int i = 0; i < n; i++) {
                    tmp[i] = prefix_sum[i][r];
                    if (l > 0) {
                        tmp[i] -= prefix_sum[i][l - 1];
                    }
                }
                ans = max(ans, kad(tmp, n));
            }
        }
        cout << ans << endl;
    }
    return 0;
}


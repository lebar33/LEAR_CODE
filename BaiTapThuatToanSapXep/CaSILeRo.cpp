
#include <vector>
#include <iostream>
#include <algorithm> // Thêm thư viện này để sử dụng hàm sort
using namespace std;

int cmp( pair<int, int> a,pair<int, int> b)
{
    return a.second < b.second; // sắp xếp theo thứ tự tăng dần của thời gian kết thúc
}

int main()
{
    int t;
    cin >> t;
    vector<pair<int, int>> lero(t); // Khai báo một vector lero với t phần tử

    for(int i = 0; i < t; i++)
    {
        cin >> lero[i].first;
        cin >> lero[i].second;
    }
    
    sort(lero.begin(), lero.end(), cmp); // Sử dụng sort với cmp là hàm so sánh
    int tmp = lero[0].second;
    int ans = 1;

    for(int i = 1; i < t; i++) // Sửa 'n' thành 't'
    {
        if(lero[i].first > tmp)
        {
            ans++;
            tmp = lero[i].second;
        }
    }

    cout << ans << endl; // In ra kết quả

    return 0;
}

#include <bits/stdc++.h>

//pair<datatype1,datatype2> v;
//make_pair(x,n) nhap vao v;
/* tuple<int, int, int> t{1, 2, 3};
   cout << get<1>(t) ; in ra mang hinh so 2*/
using namespace std;
int main(){
	tuple<int, int, int> t{1, 2, 3};
	cout << get<1>(t) ; 
	return 0;
}

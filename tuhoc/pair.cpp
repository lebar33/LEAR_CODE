#include <bits/stdc++.h>

//pair<datatype1,datatype2> v;
//make_pair(x,n) nhap vao v;
using namespace std;
int main(){
	tuple<int, int, int> t{1, 2, 3};
	cout << get<1>(t) ; 
	return 0;
}

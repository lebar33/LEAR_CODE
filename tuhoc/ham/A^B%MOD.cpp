#include <iostream>
#include <math.h> 
using namespace std;
int powPod(int x, int y, int m){
	int ans = 1;
	while(y){
		if(y%2 == 1){
			ans*=x;
			ans%=m;
		}
		x*=x;
		x%=m;
		y/=2;
	}
	return ans;
} 
int powPod2(int x, int y, int m){
	if(y == 0){
		return 1;
	}
	int tmp = powPod2(x, y/2, m);
	if(y%2 == 1){
		return (x%m*((tmp%m)*(tmp%m)%m))%m;
	}
	else return (tmp%m)*(tmp%m)%m;
}
int main(){
	int t; cin >> t;
	while(t--){
		int a, b, c; cin >> a >> b >> c;
		cout << powPod(a, b, c) << endl; 
	}
	return 0;
} 

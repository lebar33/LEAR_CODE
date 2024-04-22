#include <iostream >
#include <math.h> 
using namespace std;
int  thNghich(int n){
	int res=0, tam=n;
	while (n>0){
		res=res*10 + n%10;
		n/=10; 
	} 
	return res==tam;  
}

int  checkU(int n){
	int ans=0; 
	for(int i=2;i<sqrt(n);i++){
		int cnt=0; 
		while(n%i==0){
			++cnt ;
			n/=i; 
		} 
		if(cnt!=0 ) ++ans; 
	}
	if(n!=1) ++ ans; 
	return ans>=3; 
} 
int main(){
    int a , b ;
	cin >> a >> b ;
	bool ok = 1; 
	for (int i=a;i<=b;i++){
		if(thNghich(i) && checkU(i)){
		    cout << i << " "; 
			ok = 0; 
		}
	}  
	if(ok) cout << -1; 
} 

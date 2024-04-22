#include <iostream >
#include <bits/stdc++.h> 
using namespace std;
int cnt[1000002];
const int MOD=1000000007;
int f[1001]; 
void ktao(){
	int fibo[20];
	fibo[0]=0 , fibo[1]=1;
	for (int i=2;i<20;i++){
		fibo[i]=fibo[i-1]+fibo[i-2]; 
	}
	for(int i=0;fibo[i]<=1000;i++){
		f[fibo[i]]=1; 
	} 
	
} 
int main(){ 
	int TC;
	cin >> TC;
	while (TC--){
		int n ,k ;
		cin >> n >> k ;
		int a[n]; 
		for (int i=0;i<n;i++){
			cin >> a[i]; 
		} 
		/* bai dem so phan tu bi lap lai trong mang memset(cnt,0,sizeof(cnt));
		for(int i=0;i<n;i++){
			cin >> a[i];
			cnt[a[i]]++;}
		int dem=0; 
		for(int i=0;i<n;i++){
				
		}
		cout<< dem ; */ 
		/* bài tìm hieu so be nhat trong mang  
		//cach 1 : int min1=INT_MAX;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				min1=min(min1,max(a[i],a[j])-min(a[i],a[j])); 
			} 
		}
		sort(a,a+n); // cách 2  
		int min1=INT_MAX; 
		for(int i=0;i<n-1;i++){
			min1=min(min1,a[i+1]-a[i]); 
		} 
		cout << min1 << endl; */
		
		/* sort(a,a+n);  bài in ra k phan tu lon nhat trong n phan tu cua mang  
		for (int i=n-1;i>=n-k ;i--){
			cout << a[i] << " ";
		}*/
		/* tinh gia tri cua da thuc 
		    for(int i=0;i<n;i++){
			cin >> a[i];
		}
		long long  P=0, mu=1;
		for (int i=n-1;i>=0;i--){
			P+=a[i]*mu;
			P%=MOD;
			mu*=x;
			mu%=MOD; 
		} 
		cout<<P; */
		/* in ra so nao trong mang thuoc day fibo for(int i=0;i<n;i++){
			cin>>a[i]; 
		} 
		for(int i=0;i<n;i++){
			if(f[a[i]]==1 ){
			  cout << a[i] << " " ;
		    }
		}*/
 
		/* tìm hieu lon nhat cua 2 so trong mang khi mang khong giam dan 
		int minvl=a[0],r = -1e9 ;
		for (int i=1;i<n;i++){
			if(a[i]>minvl){
			  r=max(r,a[i]-minvl);}
			minvl = min(minvl,a[i]) ;
		} 
		if (r==-1e9){
			cout << -1; 
		} 
		else {
			cout << r ; 
		}*/
		
		/*int r=0,sum=0,idex=0;
		for (int i=0;i<k ;i++){
			sum+=a[i]; 
		} 
		r=sum;
		for (int i=1;i<n-k+1;i++){
			sum=sum-a[i-1]+a[i+k-1];
			if(r<=sum ) {
			    r=sum ; 
				idex=i;
				} 
	    }
		for(int i=idex ;i<k+idex ;i++){
			cout << a[i ]<< " "; 
		} */
		cout<< endl; 
	}
	return 0;
}

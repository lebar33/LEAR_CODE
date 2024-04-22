#include <iostream> 
using namespace std;
  
int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
    } 
    for(int i = 0; i < m; i++){
   	    cin >> b[i]; 
    } 
    int i = 0, j = 0, k = 0, dem[k];
    while(i < n && j < m){
   	    if(a[i] <= b[j]) {
   		    dem[k++] = a[i];
   		    //k++; 
   		    i++; 
	    } 
	    else{
		    dem[k++] = b[j];
		    //k++; 
		    j++ ;
	    } 
    }
    while(i < n){
        dem[k++] = a[i++];
    } 
    while(j < m){
   	    dem[k++] = b[j++]; 
    } 
    for(int i = 0; i < n+m; i++){
   	    cout << dem[i] << " "; 
    } 
    return 0; 
}

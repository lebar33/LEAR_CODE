 #include <iostream>
using namespace std;
int b[1000], c[1000], nb, nc;
 
void Distribute(int  a[], int N,  int &nb, int &nc, int k){  	  	
    int i, pa, pb, pc;
 	pa = pb = pc = 0;   	
	while (pa < N){  	   
	    for (i=0; (pa<N) && (i<k); i++, pa++, pb++){	
		    b[pb] = a[pa];
        }
 	    for (i=0; (pa<N) && (i<k); i++, pa++, pc++){	  	
		    c[pc] = a[pa]; 
        } 
 	} 
 	nb = pb; nc = pc; 
} 
void MergeSubarr(int a[], int nb, int nc, int &pa, int &pb, int &pc, int k){    	
    int rb, rc;  	
	rb = min(nb, pb+k);     
	rc = min(nc, pb+k);
 	while ((pb < rb) && (pc < rc)){  	    
	    if (b[pb] > c[pc]) 
 	  	    a[pa++] = b[pb++]; 
 	    else  a[pa++] = c[pc++]; 
    } 
 	while (pb < rb){  	    
	    a[pa++] = b[pb++]; 
    } 
 	while (pc < rc){ 
 	    a[pa++] = c[pc++]; 
    } 
} 

void Merge(int a[], int nb, int nc, int k){  	  	
    int pa, pb, pc;  	
	pa = pb = pc = 0; 
 	while ((pb < nb) && (pc < nc)){ 
 	    MergeSubarr(a, nb, nc, pa, pb, pc, k); 
    } 
 	while (pb < nb){  	   
	    a[pa++] = b[pb++];
    } 
 	while (pc < nc){  	   
	    a[pa++] = c[pc++];
    } 
} 
void mergeSort(int a[], int N, int k) {
    if (N <= k) {
        
        for (int i = 1; i < N; i++) {
            int key = a[i];
            int j = i - 1;
            while (j >= 0 && a[j] < key) {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = key;
        }
    } else {
        
        Distribute(a, N, nb, nc, k);

        mergeSort(b, nb, k);
        mergeSort(c, nc, k);

        Merge(a, nb, nc, k);
    }
}
int main(){
    int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i]; 
	} 
	mergeSort(a, n, n/2+1); 
	for(int i = 0; i < n; i++){
		cout << a[i] << " "; 
	} 
	return 0; 
} 



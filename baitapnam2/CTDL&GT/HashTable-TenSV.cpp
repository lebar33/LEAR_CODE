#include <stdio.h> 
#include <string.h> 
#include <iostream>
using namespace std; 
struct Word 
{ 
 	int key; 
 	string ten; 
}; 
int Hash(int k, int M) 
{ 
 	if (M == 0) 
 	 	return 0;  	return (k % M); 
}  
void InitHash(Word *&U, int M) 
{  
 	int i, pos; 
 	int n; cin >> n; 
    Word K[5];
    for(int i = 0; i < n; i++){
		int x; cin >> x;
		string s; cin >> s;
		K[0].key = x; 
		K[0].ten = s; 
	}
 	for(i = 0; i < M; i++) 
 	 	U[i].key = 0; 
 	for(i = 0; i < 5; i++) 
 	{ 
 	 	pos = Hash(K[i].key, M); 
 	 	U[pos] = K[i]; 
 	} 
}  
int main() { 
 	int M = 10; 
    Word *U = new Word[M]; int pos; 
 
    InitHash(U, M); 
    int x; 
    printf("Nhap MSSV tim kiem: "); scanf("%d", &x); 
    pos = Hash(x, M); if (U[pos].key == 0){ 
	printf("Khong tim thay SV nao trong bang bam\n"); 
    } else{ cout << "Ten cua SV can tim kiem la: \n" <<  U[pos].ten; 
    } 
	return 0; 
}

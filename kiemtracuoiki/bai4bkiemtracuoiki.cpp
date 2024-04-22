#include <iostream>

using namespace std;

void sovtcat(int a[6][5], int i, int j , int p, int q){
	int b[6][5]={0};
	int e[6][5]={0};
	int mm,mn;
	int k=0,h=0;
	int c[30],d[30];

	while(true){
	    int amax=0;
	    b[i][j]=a[i][j];
        if( j<4 and a[i][j+1]> amax and a[i][j+1] != b[i][j+1]){
        	amax = a[i][j+1];
            mm=i ; mn=j+1;
        }
       if( j>0 and a[i][j-1]> amax and a[i][j-1]!=b[i][j-1]){
        	amax = a[i][j-1];
            mm=i ; mn=j-1;
        }
        if( i<5 and a[i+1][j]> amax and  a[i+1][j]!=b[i+1][j]){
        	amax = a[i+1][j];
            mm=i+1;mn=j;
        }
        if( i>0 and a[i-1][j]> amax and a[i-1][j]!=b[i-1][j]){
        	amax = a[i-1][j];
            mm=i-1;mn=j;
        }
        if (amax ==0){
        	break;
		}
		i=mm;
		j=mn;
		c[k]=a[i][j];
		k++;
	}
	while(true){
	    int amax=0;
	    e[p][q]=a[p][q];
        if( q<4 and a[p][q+1]> amax and a[p][q+1] != e[p][q+1]){
        	amax = a[p][q+1];
            mm=p ; mn=q+1;
        }
       if( q>0 and a[p][q-1]> amax and a[p][q-1]!=e[p][q-1]){
        	amax = a[p][q-1];
            mm=p ; mn=q-1;
        }
        if( p<5 and a[p+1][q]> amax and  a[p+1][q]!=e[p+1][q]){
        	amax = a[p+1][q];
            mm=p+1;mn=q;
        }
        if( p>0 and a[p-1][q]> amax and a[p-1][q]!=e[p-1][q]){
        	amax = a[p-1][q];
            mm=p-1;mn=q;
        }
        if (amax ==0){
        	break;
		}
		p=mm;
		q=mn;
		d[h]=a[p][q];
		h++;
	}
	int f=0;
	for (int i=0;i<k;i++){
		for(int j=0;j<h;j++){
			if(c[i]==d[j]){
				f++;
			}
		}
	}
	cout << f<< endl;
	
}

int main(){		
	int a[6][5]=
		{{2, 1, 14, 12, 17},
		{3, 16, 22, 91, 23},
		{4, 56, 87, 31, 65},
		{27, 43, 90, 100, 101},
		{76, 54, 31, 99, 66},
		{178, 154, 150, 200, 543}};
	cout << " so vi tri cat nhau cua (0,0) voi (1,4) la : " ;
	sovtcat(a,0,0,2,3);
	

    return 0;
}


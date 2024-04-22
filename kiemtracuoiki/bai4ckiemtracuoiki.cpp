#include <iostream>

using namespace std;
void robotwin(int a[6][5], int i, int j , int p, int q){
	int b[6][5]={0};
	int e[6][5]={0};
	int mm,mn,ma,mb;
	int k=1,h=1;
	int c[30],d[30];
	c[0]=a[i][j];
	d[0]=a[p][q];
	b[i][j]=a[i][j];
	e[p][q]=a[p][q];
	while(true){
	    int amax0=0;
	    int amax1=0;
        if( j<4 and a[i][j+1]> amax0 and a[i][j+1] != b[i][j+1] and a[i][j+1] != e[i][j+1]){
        	amax0 = a[i][j+1];
            mm=i ; mn=j+1;
        }
        if( j>0 and a[i][j-1]> amax0 and a[i][j-1]!=b[i][j-1] and a[i][j-1] != e[i][j-1]){
        	amax0 = a[i][j-1];
            mm=i ; mn=j-1;
        }
        if( i<5 and a[i+1][j]> amax0 and  a[i+1][j]!=b[i+1][j] and a[i+1][j] != e[i+1][j])  {
        	amax0 = a[i+1][j];
            mm=i+1;mn=j;
        }
        if( i>0 and a[i-1][j]> amax0 and a[i-1][j]!=b[i-1][j] and a[i-1][j] != e[i-1][j]){
        	amax0 = a[i-1][j];
            mm=i-1;mn=j;
        }
        if(amax0!=0){
		    i=mm;
		    j=mn;
		    c[k]=a[i][j];
		    b[i][j]=a[i][j];
		    k++;}
        if( q<4 and a[p][q+1]> amax1 and a[p][q+1] != e[p][q+1] and a[p][q+1] != b[p][q+1] ){
        	amax1 = a[p][q+1];
            ma=p ; mb=q+1;
        }
        if( q>0 and a[p][q-1]> amax1 and a[p][q-1]!=e[p][q-1] and a[p][q-1] != b[p][q-1]){
        	amax1 = a[p][q-1];
            ma=p ; mb=q-1;
        }
        if( p<5 and a[p+1][q]> amax1 and  a[p+1][q]!=e[p+1][q] and a[p+1][q] != b[p+1][q]){
        	amax1 = a[p+1][q];
            ma=p+1;mb=q;
        }
        if( p>0 and a[p-1][q]> amax1 and a[p-1][q]!=e[p-1][q] and a[p-1][q] != b[p-1][q]) {
        	amax1 = a[p-1][q];
            ma=p-1;mb=q;
        }
        if (amax1!=0){
		    p=ma;
		    q=mb;
		    d[h]=a[p][q];
		    h++;
			e[p][q]=a[p][q];}
        if (amax1 ==0 && amax0==0){
        	break;
		}
	}
	if(h>k){
		k=h;
	}
	
	int s1=0,s2=0;
	cout << "Huong di cua Robot A la : ";
	for(int i=0;i<k;i++){
		s1+=c[i];
		cout<<c[i]<<" ";
	}
	cout << endl<< "Huong di cua Robot B la : ";
	for(int j=0;j<h;j++){
		s2+=d[j];
		cout<<d[j]<<" ";
	}
    cout << endl << "Trong so Robot A la : " << s1 <<endl;
    cout <<"Trong so Robot B la : " << s2 << endl;
	if(s1>s2){
		cout << "Robot A chien thang!";
	}
	else{
		cout << "Robot B chien thang!";
	}
}

int main(){		
	int a[6][5]=
		{{2, 1, 14, 12, 17},
		{3, 16, 22, 91, 23},
		{4, 56, 87, 31, 65},
		{27, 43, 90, 100, 101},
		{76, 54, 32, 99, 66},
		{178, 154, 150, 200, 543}};
	robotwin(a,0,0,2,3);
    return 0;
}


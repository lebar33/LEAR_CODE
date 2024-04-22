#include <iostream>

using namespace std;
int demchan( int a[],int &d){
	int c=0;
	for(int i=0;i<d;i++){
		if(a[i]%2==0){
			c++;
		}
	}
	return c;
}
int demle(int a[], int &d){
	int c=0;
	for(int i=0;i<d;i++){
		if(a[i]%2!=0){
			c++;
		}
	}
	return c;
}
long tong(int a[],int &d){
	int s;
	for(int i=0;i<d;i++){
		s+=a[i];
	}
	return s;
}
void xuatmang(int a[], int &n){
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
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
        if( i>0 and a[i-1][j]> amax0 and a[i-1][j]!=b[i-1][j] and a[i-1][j+1] != e[i-1][j]){
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
	cout << "Duong di cua robot A la : " ; xuatmang(c,k);
	cout << "Duong di cua robot B la : " ; xuatmang(d,h);
	int dema,demb;
	if(c[0]%2==0){
	    cout << "He cua Robot A la he chan "<< demchan(c,k)<<endl; 
        dema=demchan(c,k);
	}
	if(c[0]%2!=0){ 
	    cout<< "He cua Robot A la he le "<< demle(c,k)<<endl;
		dema=demle(c,k)+2;
	}
	if(d[0]%2==0){ 
	    cout << "He cua Robot B la he chan "<< demchan(d,h)<<endl;
		demb=demchan(d,h);
	}
	if(d[0]%2!=0){ 
	    cout << "He cua Robot B la he le "<< demle(d,h)<<endl;
		demb=demle(d,h)+2;
	}
	if(dema>demb){
		cout <<"Robot A chien thang!" << endl;
	}
	else if(dema<demb){
		cout <<"Robot B chien thang!" << endl;
	}
	else{
		cout<<"Khong the so sanh bang he chan le! So sanh bang trong luong." << endl;
		cout<<"Trong luong Robot A :" << tong(c,k) << endl;
		cout<<"Trong luong Robot B :" << tong(d,h) << endl;
		if(tong(c,k)>tong(d,h)){
			cout <<"Robot A chien thang!" << endl;
		}
		else{
			cout <<"Robot B chien thang!" << endl;
		}
	}
}

int main(){	
    int i,j,p,q;
	cout <<"Nhap vi tri xuat phat cua Robot A : " ;cin >> i >> j;
	cout <<"Nhap vi tri xuat phat cua Robot B : " ;cin >> p >> q;
	int a[6][5]=
		{{2, 1, 14, 12, 17},
		{3, 16, 22, 91, 23},
		{4, 56, 87, 31, 65},
		{27, 43, 90, 100, 101},
		{76, 54, 32, 99, 66},
		{178, 154, 150, 200, 543}};
	robotwin(a,i,j,p,q);

    return 0;
}


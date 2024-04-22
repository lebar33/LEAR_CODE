#include <iostream>
#include <math.h>
#include <set>
using namespace std;
void gamerobot(int** a, int m, int n, int i, int j){
	int k=1;
    int c[30];
	int b[m][n]={0};
	int mm,mn;
	c[0]=a[i][j];
	char t;
	cout<<"*Nhan 1 de di chuyen robot hoac nhan so khac de dung lai!" << endl;
	while(true){
		cin>>t;
	    int amax=0;
	    b[i][j]=a[i][j];
	    cout<<"+Buoc tiep theo : "<<endl;
	    for(int z=0;z<m;z++){
			for(int x=0;x<n;x++){
					if(a[z][x]==a[i][j]){
						cout <<a[z][x];
					}
					else{
						cout<<"-"<< " ";
					}
			}
			cout << endl;
		}
        if( j<(n-1) and a[i][j+1]> amax and a[i][j+1] != b[i][j+1]){
        	amax = a[i][j+1];
            mm=i ; mn=j+1;
        }
        if( j>0 and a[i][j-1]> amax and a[i][j-1]!=b[i][j-1]){
        	amax = a[i][j-1];
            mm=i ; mn=j-1;
        }
        if( i<(m-1) and a[i+1][j]> amax and  a[i+1][j]!=b[i+1][j]){
        	amax = a[i+1][j];
            mm=i+1;mn=j;
        }
        if( i>0 and a[i-1][j]> amax and a[i-1][j]!=b[i-1][j]){
        	amax = a[i-1][j];
            mm=i-1;mn=j;
        }
        if (amax ==0 || t!='1'){
        	break;
		}
		i=mm;
		j=mn;
		c[k]=a[i][j];
		k++;
    }
    cout<<endl;
    cout << endl << "Duong di cua Robot : "<<endl;
    for(int i=0;i<k;i++){
    	cout<<c[i]<<" ";
	}
	cout<<endl<<endl;
	for(int i=0;i<m;i++){
    	for(int j=0; j<n;j++){
    		if(j!=(n-1)){
    			for(int d=0;d<k;d++){
    				if(a[i][j]==c[0]){
    					cout <<"\033[34m"<< a[i][j] <<"\033[0m"<< " ";
    					break;
					}
    				else if (a[i][j]==c[d]){
    					cout <<"\033[31m"<< a[i][j] <<"\033[0m"<< " ";
    					break;
					}
					else if(d==k-1 && a[i][j]!=c[d]){
						cout << a[i][j] << " ";
					}
				}
			}
			else {
				for(int d=0;d<k;d++){
					if(a[i][j]==c[0]){
    					cout <<"\033[34m"<< a[i][j] <<"\033[0m"<< endl;
    					break;
					}
    				else if (a[i][j]==c[d]){
    					cout <<"\033[31m"<< a[i][j] <<"\033[0m"<< " ";
    					cout << endl;
    					break;
					}
					else if(d==k-1 && a[i][j]!=c[d]){
						cout << a[i][j] << endl;
						continue;
					}
				}
			}
		}
	}
}
void NhapMang(int** a, int m, int n) {
    set<int> s;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int v;
            while (true) {
                cout << "Nhap a[" << i << "][" << j << "]: ";
                cin >> v;

                if (v < 0) {
                    cout << "Khong the nhap so am!" << endl;
                } else if (s.find(v) != s.end()) {
                    cout << "Giá tri nay da xuat hien!" << endl;
                } else {
                    s.insert(v);
                    a[i][j] = v;
                    break;
                }
            }
        }
    }
}
void xuatmang(int** a,int m,int n){
	for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
	int chon;
    int i,j,p,q;
    cout << "-->Bay gio ban hay nhap so hang va so cot cho Map A!"<<endl;
    int m, n;
    cout << "Nhap so hang: ";
    cin >> m;
    cout << "Nhap so cot: ";
    cin >> n;
    int** a = new int*[m];
    for (int i = 0; i < m; i++) {
        a[i] = new int[n];
    }

    NhapMang(a, m, n);

    cout << "*Map A:" << endl;
    xuatmang(a,m,n);
    cout << "+Ban hay chon vi tri xuat phat cua robot . " << endl;
    cout << "+Robot hang : "; cin >> i ;cout <<"+Robot cot : ";cin>>j;
    gamerobot(a,m,n,i,j);
    return 0;
}

#include <iostream>
#include <math.h>
#include <set>
using namespace std;
void gamerobot(int** a, int m, int n, int i, int j){
	int k=1;
    int c[m*n];
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
void sovtcat(int** a,int m, int n, int i, int j , int p, int q){
	int b[m][n]={0};
	int e[m][n]={0};
	int mm,mn;
	int k=1,h=1;
	int c[m*n],d[m*n];
	c[0]=a[i][j];
	d[0]=a[p][q];
	while(true){
	    int amax=0;
	    b[i][j]=a[i][j];
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
        if( q<(n-1) and a[p][q+1]> amax and a[p][q+1] != e[p][q+1]){
        	amax = a[p][q+1];
            mm=p ; mn=q+1;
        }
       if( q>0 and a[p][q-1]> amax and a[p][q-1]!=e[p][q-1]){
        	amax = a[p][q-1];
            mm=p ; mn=q-1;
        }
        if( p<(m-1) and a[p+1][q]> amax and  a[p+1][q]!=e[p+1][q]){
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
	cout<< "Huong di cua robot A : ";
	for(int i=0;i<k;i++){
		cout << c[i] << " ";
	}	
	cout << endl << "Huong di cua robot B : ";
	for (int i=0;i<h;i++){
		cout << d[i] << " ";
	}
	cout << endl;
	int f=0;
	int gg[m*n];
	for (int i=0;i<k;i++){
		for(int j=0;j<h;j++){
			if(c[i]==d[j]){
				gg[f]=c[i];
				f++;
			}
		}
	}
	cout << "Vi tri trung nhau la : "<< endl;
	for(int i=0;i<m;i++){
    	for(int j=0; j<n;j++){
    		if(j!=(n-1)){
    			for(int d=0;d<k;d++){
    				if (a[i][j]==gg[d]){
    					cout <<"\033[31m"<< a[i][j] <<"\033[0m"<< " ";
    					break;
					}
					else if(d==k-1 && a[i][j]!=gg[d]){
						cout << a[i][j] << " ";
					}
				}
			}
			else {
				for(int d=0;d<k;d++){
    				if (a[i][j]==gg[d]){
    					cout <<"\033[31m"<< a[i][j] <<"\033[0m"<< " ";
    					cout << endl;
    					break;
					}
					else if(d==k-1 && a[i][j]!=gg[d]){
						cout << a[i][j] << endl;
						continue;
					}
				}
			}
		}
	}
	cout <<"So vi tri trung nhau : " ;
	cout << f<< endl;
}
void robotwin(int** a,int m, int n, int i, int j , int p, int q){
	int b[m][n]={0};
	int e[m][n]={0};
	int mm,mn,ma,mb;
	int k=1,h=1;
	int c[m*n],d[m*n];
	c[0]=a[i][j];
	d[0]=a[p][q];
	b[i][j]=a[i][j];
	e[p][q]=a[p][q];
	char u;
	cout<<"*Nhan 1 de di chuyen robot hoac nhan so khac de dung lai!" << endl;
	while(true){
		cin>>u;
	    int amax0=0;
	    int amax1=0;
	    cout<<"Hai robot di chuyen :"<<endl;
	    for(int x=0;x<m;x++){
	    	for(int z=0;z<n;z++){
	    		if(a[x][z]==a[i][j]){
	    			cout <<"\033[31m"<< a[x][z] <<"\033[0m"<< " ";
				}
				else if(a[x][z]==a[p][q]){
					cout <<"\033[34m"<< a[x][z] <<"\033[0m"<< " ";
				}
				else{
					cout<<"-"<<" ";
				}
			}
			cout<<endl;
		}
        if( j<(n-1) and a[i][j+1]> amax0 and a[i][j+1] != b[i][j+1] and a[i][j+1] != e[i][j+1]){
        	amax0 = a[i][j+1];
            mm=i ; mn=j+1;
        }
        if( j>0 and a[i][j-1]> amax0 and a[i][j-1]!=b[i][j-1] and a[i][j-1] != e[i][j-1]){
        	amax0 = a[i][j-1];
            mm=i ; mn=j-1;
        }
        if( i<(m-1) and a[i+1][j]> amax0 and  a[i+1][j]!=b[i+1][j] and a[i+1][j] != e[i+1][j])  {
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
        if( q<(n-1) and a[p][q+1]> amax1 and a[p][q+1] != e[p][q+1] and a[p][q+1] != b[p][q+1] ){
        	amax1 = a[p][q+1];
            ma=p ; mb=q+1;
        }
        if( q>0 and a[p][q-1]> amax1 and a[p][q-1]!=e[p][q-1] and a[p][q-1] != b[p][q-1]){
        	amax1 = a[p][q-1];
            ma=p ; mb=q-1;
        }
        if( p<(m-1) and a[p+1][q]> amax1 and  a[p+1][q]!=e[p+1][q] and a[p+1][q] != b[p+1][q]){
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
			e[p][q]=a[p][q];
			h++;}
        if ((amax1 ==0 && amax0==0) or ( u!='1')){
        	break;
		}
	}
	cout<< endl << endl;
	int tam;
	if(h>k){
		tam=h;
	}
	else{
		tam=k;
	}
	for(int i=0;i<m;i++){
    	for(int j=0; j<n;j++){
    		if(j!=(n-1)){
    			for(int g=0;g<tam;g++){
    				if (a[i][j]==c[g]){
    					cout <<"\033[31m"<< a[i][j] <<"\033[0m"<< " ";
    					break;
					}
					else if(a[i][j]==d[g]){
						cout <<"\033[34m"<< a[i][j] <<"\033[0m"<< " ";
    					break;
					}
					else if(g==tam-1){
						cout << a[i][j] << " ";
					}
				}
			}
			else {
				for(int g=0;g<tam;g++){
    			    if (a[i][j]==c[g]){
    					cout <<"\033[31m"<< a[i][j] <<"\033[0m"<< endl;
    					break;
					}
					else if(a[i][j]==d[g]){
						cout <<"\033[34m"<< a[i][j] <<"\033[0m"<< endl;
    					break;
					}
					else if(g==tam-1 ){
						cout << a[i][j] << endl;
					}
				}
			}
		}
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
void xuatmang(int** a,int m,int n){
	for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
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

                if (v <= 0) {
                    cout << "Khong the nhap so am hoac so 0 ! Vui long nhap lai!" << endl;
                } else if (s.find(v) != s.end()) {
                    cout << "Gia tri nay da xuat hien! Vui long nhap lai!" << endl;
                } else {
                    s.insert(v);
                    a[i][j] = v;
                    break;
                }
            }
        }
    }
}
int main()
{
    cout << "\033[35m"<<"******************************CHAO MUNG BAN DA DEN VOI GAME ROBOT CUA VUTRUONG !******************************" <<"\033[0m"<< endl<<endl ;
    cout << "*)Chung toi co : " << endl;
    cout << "-Game 1 : Robot di chuyen theo 4 huong Dong Tay Nam Bac, huong nao co gia tri lon hon se di theo huong do." << endl;
    cout << "-Game 2 : Cho 2 robot di chuyen, sau do tinh so lan cat nhau cua 2 robot do." << endl;
    cout << "-Game 3 : Cho 2 robot di chuyen o 2 vi tri khac nhau, chung se di chuyen sao cho khong cat nhau va di theo 4 huong Dong Tay Nam Bac, Robot nao co trong luong so lon hon thi chien thang."<<endl<<endl;
    cout << "--> Truoc khi bat dau choi game ban can tao map cho Robot. Sau do Robot se di chuyen tren map nay ." << endl;
    cout << "--> Ban hay nhap cac vi tri co so khac nhau nhe !!"<<endl<<endl;
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
    char t='y';
    while ( t=='y'){
    	cout << "                              -Chon 1,2,3 tuong ung cho game 1,2,3 ." << endl;
    	cin >> chon ;
        switch(chon){
    	    case 1:
    	    	cout << "+Ban hay chon vi tri xuat phat cua robot . " << endl;
                cout << "+Robot hang : "; cin >> i ;cout <<"+Robot cot : ";cin>>j;
    		    gamerobot(a,m,n,i,j);
    		    break;
    	    case 2:
    		    cout << "+Ban hay chon vi tri xuat phat cua robot A . " << endl;
    		    cout << "+Robot A hang : "; cin >> i ;cout <<"+Robot A cot : ";cin>>j;
    		    cout << "+Ban hay chon vi tri xuat phat cua robot B . " << endl;
    		    cout << "+Robot B hang : "; cin >> p ;cout <<"+Robot B cot : ";cin>>q;
    		    sovtcat(a,m,n,i,j,p,q);
    		    break;
    	    case 3:
    		    cout << "+Ban hay chon vi tri xuat phat cua robot A . " << endl;
    		    cout << "+Nhap hang : "; cin >> i ;cout <<"+Nhap cot : ";cin>>j;
    		    cout << "+Ban hay chon vi tri xuat phat cua robot B . " << endl;
    		    cout << "+Nhap hang : "; cin >> p ;cout <<"+Nhap cot : ";cin>>q;
    		    robotwin(a,m,n,i,j,p,q);
    		    break;
    	    default:
    		    cout << "                              >>>BAN DA NHAP SAI!!! VUI LONG NHAP 1,2 HOAC 3.";
    		    break;
	}
	cout << endl;
	cout << "------------------------------>BAN CO MUON TIEP TUC CHOI KHONG? NHAP 'y' DE TIEP TUC HOAC 'n' DE DUNG LAI ! " << endl; cin >> t;
	if(t=='y'){	
		cout << "                              ------------------------------" << endl<<endl;
	}
	else{
		cout <<"\033[35m"<<"******************************CAM ON BAN DA CHOI GAME CUA CHUNG TOI <3**********************************" <<"\033[0m"<< endl; 
	}
    }
}

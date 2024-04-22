#include <iostream>
#include <fstream> 
#include <algorithm>
using namespace std;
void Shift (int a[], int left, int right){   
 	int x, curr, joint; 
    curr = left; joint =2*curr+1;
    x = a[curr]; 
 	while (joint <= right){       
        if (joint < right ){
            if (a[joint] > a[joint+1]){                               
			    joint = joint+1; 
            } 
        } 
        if (a[joint]>x){                        
		    break;  
        } 
        a[curr] = a[joint];                 
		curr = joint;             
		joint = 2*curr+1; 
 	} 
  	a[curr] = x; 
} 
void CreateHeap(int a[], int n){
	for(int i = n/2 - 1; i >= 0; i--){
		Shift(a, i, n-1);
	}
} 
void heapSort(int a[], int n){
	CreateHeap(a, n); 
	for(int i = n - 1; i >= 0; i--){
		swap(a[i], a[0]); 
		Shift(a, 0, i-1);
	}
}
int main(){
	string filename = "input.txt";
    ifstream inputFile(filename);

    if (!inputFile)
    {
        cerr << "Cannot open file: " << filename << endl;
        return 1;
    }
    int n;
    inputFile >> n;
    int a[n] ;
    for (int i = 0; i < n; i++)
    {
        inputFile >> a[i];
    }
    inputFile.close();
    heapSort(a, n);
    for(int i = 0; i < n; i++){
    	cout << a[i] << " "; 
	} 
     
	return 0;
} 

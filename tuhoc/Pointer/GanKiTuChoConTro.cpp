#include <iostream>
using namespace std;
int main(){
	char ch;
	char * pc ;
	pc = &ch;
	*pc = 'A';
	cout << ch;
	return 0; 
} 

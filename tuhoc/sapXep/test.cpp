#include <iostream>
#include <fstream>
using namespace std; 
void Swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

void SelectionSort(int a[], int N)
{
    int min;
    for (int i = 0; i < N - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < N; j++)
        {
            if (a[j] > a[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            Swap(a[min], a[i]);
        }
    }
}

int main()
{
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

    SelectionSort(a, n);
    for(int i = 0; i < n; i++){
    	cout << a[i] << " "; 
	} 
    
    return 0;
}


#include <iostream>
#include <fstream>
#include <chrono>
#include "Graph.h"
using namespace std;
int main()
{
	ifstream inputFile("text6.txt");
	int n, m;
	cout << "nhap so diem:";
	inputFile >> n >> m;
	Graph* t = new Graph(n);

	for (int i = 0; i < m; i++) {
		int u, v;
		inputFile >> u >> v;
		t->addEdge(u, v);
	}
	inputFile.close();
	cout << endl;
	t->printGraph();
	int count = 0;
	int yesno = 1;
	for(int i = 1; i <= 3; i++){
		switch (i)
		{
		case 1:
		{
			cout << "-----Giai thuat greedy-----\n";
			auto start = chrono::high_resolution_clock::now();
			int x = t->greedy_to_color();
			auto end = chrono::high_resolution_clock::now();
			chrono::duration<double> duration = end - start;
			double timeInSeconds = duration.count();
			t->print1();
			cout << "run time: " << timeInSeconds << " (s)" << "\n\n";
			t->colors.resize(n, 0);
			break;
		}
		case 3:
		{
			cout << "-----Giai thuat vet can-----\n";
			auto start = chrono::high_resolution_clock::now();
			t->try_to_color(0, count);
			auto end = chrono::high_resolution_clock::now();
			chrono::duration<double> duration = end - start;
			double timeInSeconds = duration.count();
			t->print1();
			cout << "run time: " << timeInSeconds << " (s)" << "\n\n";
			t->colors.resize(n, 0);
			break;
		}
		case 2:
		{
			cout << "-----Giai thuat di truyen-----\n";
			auto start = chrono::high_resolution_clock::now();
			t->genetic();
			auto end = chrono::high_resolution_clock::now();
			chrono::duration<double> duration = end - start;
			double timeInSeconds = duration.count();
			cout << "run time: " << timeInSeconds << " (s)" << "\n\n";
			t->colors.resize(n, 0);
			break;
		}
		}
	}
	return 0;
}

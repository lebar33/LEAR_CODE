#include "Graph.h"
//phần  định nghĩa genetic
int max1 = 10000;
int slqt = 1500;
int nghiem[1500][100] = { 0 };
int thichnghi[1500];
void Graph::khoitao() {
	int n = numVertices;
	for (int i = 0; i < slqt; i++) {
		for (int j = 0; j < n; j++) nghiem[i][j] = rand() % n;
	}
}
void Graph::danhgia() {
	int n = numVertices;
	for (int i = 0; i < slqt; i++) {
		thichnghi[i] = max1;
		map <int, int> mp;
		for (int j = 0; j < n; j++) {
			mp[nghiem[i][j]]++;
		}
		int x = mp.size();
		if (x > 1)  thichnghi[i] = mp.size();
		for (int j = 0; j < n - 1; j++) {
			for (int t = j + 1; t < n; t++) {
				if (nghiem[i][j] == nghiem[i][t] && adjacencyMatrix[j][t] == 1) thichnghi[i] += max1;
			}
		}
	}
}
void Graph::chonloc() {
	int n = numVertices;
	int tmp[1000];
	for (int i = 0; i < slqt; i++) tmp[i] = thichnghi[i];
	sort(tmp, tmp + 1000);
	int muc = tmp[200];
	for (int i = 0; i < slqt; i++) {
		if (thichnghi[i] > muc) {
			for (int j = 0; j < n; j++) {
				nghiem[i][j] = nghiem[(rand() % slqt)][j];
			}
		}
	}
}
void Graph::laighep() {
	int n = numVertices;
	for (int i = 0; i < 20; i++) {
		int cha = rand() % slqt;
		int me = rand() % slqt;
		for (int j = 0; j < n; j++) {
			if (rand() % 2 == 1) {
				int tmp = nghiem[cha][j];
				nghiem[cha][j] = nghiem[me][j];
				nghiem[me][j] = tmp;
			}
		}
	}
}
void Graph::dotbien() {
	nghiem[rand() % slqt][rand() % numVertices] = rand() % numVertices;
}
void Graph::genetic() {
	srand(time(NULL));
	khoitao();
	for (int i = 0; i < 50; i++) {
		danhgia();
		chonloc();
		laighep();
		dotbien();
	}
	printgennetic();
}
void Graph::printgennetic() {
	int tmp[1500];
	for (int i = 0; i < slqt; i++) tmp[i] = thichnghi[i];
	sort(tmp, tmp + slqt);
	int best = tmp[0];
	cout << "total color: " << best << endl;
	for (int i = 0; i < slqt; i++) {
		if (thichnghi[i] == best) {
			for (int j = 0; j < numVertices; j++) {
				cout << nghiem[i][j] << "\t";
			}
			cout << endl;
			break;
		}
	}
}
//phần định nghĩa greedy
bool Graph::be_color(int i, int color)
{
	int n = numVertices;
	for (int j = 0; j < n; j++)
	{
		if (colors[j] == color && adjacencyMatrix[i][j] == 1)
		{
			return false;
		}
	}
	return	true;
}
int	 Graph::greedy_one_color(int somau)//một màu tô được bao nhiêu đỉnh
{
	int n = numVertices;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (colors[i] == 0 && be_color(i, somau))
		{
			count++;
			colors[i] = somau;
		}
	}
	return  count;
}
int  Graph::greedy_to_color()
{
	int n = numVertices;

	int	somau = 0;
	int count = 0;
	while (count < n)
	{
		somau++;
		count += greedy_one_color(somau);
	}
	return somau;
}
//phần định nghĩa vét cạn
int Graph::try_to_color(int i, int& count) {
	int n = numVertices;
	for (int color = 1; color <= n; color++) {
		if (be_color(i, color) && colors[i] == 0) {
			count++;
			colors[i] = color;
		}
		if (i == n - 1) {
			if (count == n) {
				return count;
			}
		}
		if (i != n - 1)
		{
			int result = try_to_color(i + 1, count);
			if (result == n) {
				return result;
			}
		}
	}
	return 0;
}
void Graph::print1()
{
	int n = numVertices;
	int cnt[500] = { 0 };
	for (int i = 0; i < n; i++)
	{
		cout << colors[i] << "\t";
		cnt[colors[i]] = 1;
	}	
	int somau = 0;
	for (int i = 0; i <=n; i++) {
		if (cnt[i] == 1) ++somau;
	}
	cout << "\ntotal color: " << somau ;
	cout << endl;
}
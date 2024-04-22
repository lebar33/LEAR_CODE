#pragma once
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <map>
using namespace std;
class Graph {
private:
    int numVertices;
    vector<vector<int>> adjacencyMatrix;
public:
    vector<int> colors;
    Graph(int n) : numVertices(n) {
        adjacencyMatrix.resize(n, vector<int>(n, 0));
        colors.resize(n, 0);
    }
    ~Graph() {};
    void addEdge(int u, int v) {
        adjacencyMatrix[u - 1][v - 1] = 1;
        adjacencyMatrix[v - 1][u - 1] = 1;
    }
    void printGraph() {
        for (int i = 0; i < numVertices; i++) {
            for (int j = 0; j < numVertices; j++) {
                cout << adjacencyMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    // phần thuật toán genetic
    void khoitao();
    void danhgia();
    void chonloc();
    void laighep();
    void dotbien();
    void genetic();
    void printgennetic();
    //kết  thúc thuật toán genetic

    //thuật toán greedy
    bool be_color(int i, int color);
    int	 greedy_one_color(int somau);//một màu tô được bao nhiêu đỉnh
    int  greedy_to_color();

    //thuật  toán vét cạn
    int try_to_color(int i, int& count);

    void print1();

};

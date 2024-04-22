#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


void SelectionSort(int arr[], int n);
void Shift(int a[], int left, int right);
void HeapSort(int a[], int n);
int QuickSort(int a[], int left, int right);
void Merge(int a[], int nb, int nc, int k);
void MergeSort(int a[], int n, int k);

int main() {
    const int SIZE = 10000; 
    int arr[SIZE];


    srand(static_cast<unsigned int>(time(nullptr)));
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 1000; 
    }

    clock_t start, finish;
    start = clock();
    SelectionSort(arr, SIZE);
    finish = clock();
    clock_t durationSelectionSort = finish - start;
    cout << "Selection Sort:" << endl;
    cout << "Thoi gian chay: " << durationSelectionSort << " ms\n";

    int heapArr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        heapArr[i] = arr[i];
    }
    start = clock();
    HeapSort(heapArr, SIZE);
    finish = clock();
    clock_t durationHeapSort = finish - start;
    cout << "Heap Sort:" << endl;
    cout << "Thoi gian chay: " << durationHeapSort << " ms\n";

    int quickArr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        quickArr[i] = arr[i];
    }
    start = clock();
    int quickAssignments = QuickSort(quickArr, 0, SIZE - 1);
    finish = clock();
    clock_t durationQuickSort = finish - start;
    cout << "Quick Sort:" << endl;
    cout << "Thoi gian chay: " << durationQuickSort << " ms\n";
    cout << "So phep gan: " << quickAssignments << "\n";

    int mergeArr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        mergeArr[i] = arr[i];
    }
    start = clock();
    MergeSort(mergeArr, SIZE, 2);
    finish = clock();
    clock_t durationMergeSort = finish - start;
    cout << "Merge Sort:" << endl;
    cout << "Thoi gian chay: " << durationMergeSort << " ms\n";

    return 0;
}

void SelectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

void Shift(int a[], int left, int right) {
    int x, curr, joint;
    curr = left;
    joint = 2 * curr + 1;
    x = a[curr];
    while (joint <= right) {
        if (joint < right) {
            if (a[joint] < a[joint + 1]) {
                joint = joint + 1;
            }
        }
        if (a[joint] < x) {
            break;
        }
        a[curr] = a[joint];
        curr = joint;
        joint = 2 * curr + 1;
    }
    a[curr] = x;
}

void HeapSort(int a[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        Shift(a, i, n - 1);
    }
    for (int i = n - 1; i >= 0; i--) {
        swap(a[i], a[0]);
        Shift(a, 0, i - 1);
    }
}

int QuickSort(int a[], int left, int right) {
    int i = left, j = right, x;
    int assignments = 0;

    if (left >= right) {
        return assignments;
    }

    x = a[(left + right) / 2];

    while (i < j) {
        while (a[i] < x) {
            i++;
        }
        while (a[j] > x) {
            j--;
        }
        if (i <= j) {
            swap(a[i], a[j]);
            assignments += 3;
            i++;
            j--;
        }
    }
    assignments += QuickSort(a, left, j);
    assignments += QuickSort(a, i, right);

    return assignments;
}

void Merge(int a[], int nb, int nc, int k) {
    int rb, rc;
    rb = min(nb, k);
    rc = min(nc, k);
    int pa, pb, pc;
    pa = pb = pc = 0;

    while ((pb < rb) && (pc < rc)) {
        if (a[pb] < a[pc]) {
            a[pa++] = a[pb++];
        } else {
            a[pa++] = a[pc++];
        }
    }

    while (pb < rb) {
        a[pa++] = a[pb++];
    }

    while (pc < rc) {
        a[pa++] = a[pc++];
    }
}

void MergeSort(int a[], int n, int k) {
    if (n <= k) {
        return;
    }
    int mid = n / 2;
    MergeSort(a, mid, k);
    MergeSort(a + mid, n - mid, k);
    Merge(a, mid, n - mid, k);
}


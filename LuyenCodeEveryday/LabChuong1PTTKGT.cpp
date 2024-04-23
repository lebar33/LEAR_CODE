#include <iostream>
#include <vector>
#include <chrono>

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    std::vector<int> arr;
    int size = 100000; // Thay đổi kích thước tại đây
    for (int i = size; i > 0; i--) {
        arr.push_back(i);
    }

    auto start = std::chrono::high_resolution_clock::now();
    bubbleSort(arr);
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> duration = end - start;
    std::cout << "Thoi gian thuc thi: " << duration.count() << " giay" << std::endl;

    return 0;
}
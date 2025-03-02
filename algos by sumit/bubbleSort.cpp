#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& arr) {
    int size = arr.size();
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (arr[j] < arr[j + 1]) {  
                int temp = arr[j];  
                arr[j] = arr[j + 1]; 
                arr[j + 1] = temp;  
            }
        }
    }
}

int main() {
    std::vector<int> arr = {1, 3, 2, 5, 4, 5, 3, 5, 6, 7, 1};
    bubbleSort(arr);

    for (int i : arr) {
        std::cout << i << " ";
    }

    return 0;
}
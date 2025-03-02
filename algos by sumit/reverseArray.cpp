#include <iostream>
#include <vector>

void reverseArray(std::vector<int> &arr) {
    int size = arr.size(); // 10

    for (int i = 0; i < size/2; i++) { // 5
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {

    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverseArray(arr);

    for (int i : arr) {
        std::cout << i << " ";
    }

    return 0;
}

// Written by Sumit
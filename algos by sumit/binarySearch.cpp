#include <iostream>
#include <vector>

int binarySearch(std::vector<int> arr, int find ) {

    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (arr[middle] == find) {
            return middle;
        } else if (arr[middle] > find) {
            right = middle - 1;  
        } else {
            left = middle + 1;   
        }
    }

    return -1;
}

int main() {

    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int find = 9;

    int index = binarySearch(arr, find);
    std::cout << "Element found at index " << index;

    return 0;
}

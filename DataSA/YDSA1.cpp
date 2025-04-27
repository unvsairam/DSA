#include <iostream>
using namespace std;

int main() {
    int arr[100];  // Max size
    int n, pos, element;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter position to insert (0 to " << n << "): ";
    cin >> pos;

    if(pos < 0 || pos > n) {
        cout << "Invalid position!";
        return 0;
    }

    cout << "Enter element to insert: ";
    cin >> element;

    // Shift elements to the right
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos] = element;
    n++;  // Increase array size

    cout << "Array after insertion:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

#include <iostream>
using namespace std;

int main () {

    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr) / sizeof(arr[0])

    cout<<"Elements of the array are:";
    for(int i=0; i< size; i++) {
        cout << arr[i]<<"";

    }
    cout << endl;

    cout<<"First element:" << arr[0]<<endl;
    cout<<"third element:"<< arr[2]<< endl;
    cout<<" Last element:"<<arr[size -1]<< endl;

    return 0;

}
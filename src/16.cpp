#include <iostream>
using namespace std;

int main() {
    int n = 5; // Input number of elements in the array
    int arr[n]; // Array to store elements

    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array after input: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

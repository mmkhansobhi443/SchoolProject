#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of 'n': ";
    cin >> n;
    if (n % 2 == 0) {
        cout << n * n / 2 << endl;
    } else {
        cout << "The number is odd." << endl;
    }
    return 0;
}

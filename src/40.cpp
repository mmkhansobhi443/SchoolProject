#include <iostream>
using namespace std;

int main() {
    int age = 18;
    string name = "John Doe";
    float height = 170.5f;
    bool is_student = true;
    
    cout << "Age: " << age << endl;
    cout << "Name: " << name << endl;
    cout << "Height (in cm): " << height << endl;
    cout << "Is student: " << is_student ? "Yes" : "No" << endl;
    
    return 0;
}

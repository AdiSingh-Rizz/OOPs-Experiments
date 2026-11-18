#include <iostream>
using namespace std;

int main() {
    int age = 20;
    float cgpa = 8.5;
    char grade = 'A';
    const double PI = 3.14159;

    int a = 10, b = 5;

    cout << "Age: " << age << endl;
    cout << "CGPA: " << cgpa << endl;
    cout << "Grade: " << grade << endl;
    cout << "PI: " << PI << endl;

    cout << "Addition = " << a + b << endl;
    cout << "Subtraction = " << a - b << endl;
    cout << "Multiplication = " << a * b << endl;
    cout << "Division = " << a / b << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    // Variables and data types
    int age;
    float marks;
    char grade;
    string name;
    bool passed;

    // Constant
    const float PI = 3.14;

    // Input
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your marks: ";
    cin >> marks;

    // Operators
    float total = marks + 10;
    float average = total / 2;

    passed = (marks >= 40);

    grade = (marks >= 75) ? 'A' : 'B';

    // Output
    cout << "\n----- Student Details -----";
    cout << "\nName: " << name;
    cout << "\nAge: " << age;
    cout << "\nMarks: " << marks;
    cout << "\nUpdated Marks: " << total;
    cout << "\nAverage: " << average;
    cout << "\nGrade: " << grade;
    cout << "\nPassed: " << passed;
    cout << "\nPI Value: " << PI;

    return 0;
}

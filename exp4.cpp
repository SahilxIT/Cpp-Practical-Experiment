
#include <iostream>
using namespace std;

// Base Class
class Person
{
public:
    string name;
    int age;

    void getPerson()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPerson()
    {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
    }
};

// Single Inheritance
class Student : public Person
{
public:
    int rollNo;

    void getStudent()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }

    void displayStudent()
    {
        displayPerson();
        cout << "\nRoll Number: " << rollNo;
    }
};

// Multilevel Inheritance
class GraduateStudent : public Student
{
public:
    string researchTopic;

    void getGraduate()
    {
        cout << "\nEnter Research Topic: ";
        cin >> researchTopic;
    }

    void displayGraduate()
    {
        displayStudent();
        cout << "\nResearch Topic: " << researchTopic;
    }
};

int main()
{
    GraduateStudent g;

    g.getPerson();
    g.getStudent();
    g.getGraduate();

    cout << "\n\nGraduate Student Details";

    g.displayGraduate();

    return 0;
}

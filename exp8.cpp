
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Student
{
public:
    string name;
    int marks;

    Student(string n, int m)
    {
        name = n;
        marks = m;
    }
};

int main()
{
    // Vector Container
    vector<Student> students =
    {
        Student("Sahil", 85),
        Student("Aman", 70),
        Student("Rahul", 92),
        Student("Ali", 65),
        Student("Sameer", 78)
    };

    cout << "Original Student Data:\n";

    for (auto s : students)
    {
        cout << s.name << " : " << s.marks << endl;
    }

    // Sort Algorithm
    sort(students.begin(), students.end(),
         [](Student a, Student b)
         {
             return a.marks > b.marks;
         });

    cout << "\nSorted Student Data:\n";

    for (auto s : students)
    {
        cout << s.name << " : " << s.marks << endl;
    }

    // find_if Algorithm
    auto it = find_if(students.begin(), students.end(),
                      [](Student s)
                      {
                          return s.marks >= 80;
                      });

    if (it != students.end())
    {
        cout << "\nStudent with marks >= 80: "
             << it->name << endl;
    }

    // Map Container
    map<int, string> studentMap;

    for (auto s : students)
    {
        studentMap[s.marks] = s.name;
    }

    cout << "\nMap Container:\n";

    for (auto p : studentMap)
    {
        cout << p.first << " : " << p.second << endl;
    }

    // Unordered Map Container
    unordered_map<string, int> marksMap;

    for (auto s : students)
    {
        marksMap[s.name] = s.marks;
    }

    cout << "\nUnordered Map Container:\n";

    for (auto p : marksMap)
    {
        cout << p.first << " : " << p.second << endl;
    }

    // Transform Algorithm
    vector<int> updatedMarks(students.size());

    transform(students.begin(), students.end(),
              updatedMarks.begin(),
              [](Student s)
              {
                  return s.marks + 5;
              });

    cout << "\nUpdated Marks:\n";

    for (int marks : updatedMarks)
    {
        cout << marks << " ";
    }

    return 0;
}

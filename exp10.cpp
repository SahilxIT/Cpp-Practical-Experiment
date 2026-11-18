
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream file;

    // Open file for writing
    file.open("students.csv", ios::out);

    if (!file)
    {
        cout << "File Opening Failed!";
        return 1;
    }

    // Write CSV records
    file << "RollNo,Name,Marks\n";
    file << "101,Sahil,85\n";
    file << "102,Aman,90\n";
    file << "103,Rahul,78\n";

    // tellp()
    cout << "Write Position: " << file.tellp() << endl;

    // seekp()
    file.seekp(0, ios::end);

    cout << "End Position: " << file.tellp() << endl;

    file.close();

    // Open file for reading
    file.open("students.csv", ios::in);

    if (!file)
    {
        cout << "File Reading Failed!";
        return 1;
    }

    // tellg()
    cout << "\nRead Position: " << file.tellg() << endl;

    // seekg()
    file.seekg(0, ios::beg);

    cout << "\nStudent Records:\n";

    string line;

    while (getline(file, line))
    {
        cout << line << endl;
    }

    cout << "\nFinal Read Position: " << file.tellg() << endl;

    file.close();

    return 0;
}

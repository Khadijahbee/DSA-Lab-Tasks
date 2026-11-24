#include <iostream>
using namespace std;

struct Student
{
    string name;
    int rollNo;
    float marks;
};

int main()
{
    Student s;

    cout << "Enter student name: ";
    cin >> s.name;

    cout << "Enter roll number: ";
    cin >> s.rollNo;

    cout << "Enter marks: ";
    cin >> s.marks;

    cout << "\nStudent Information" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.rollNo << endl;
    cout << "Marks: " << s.marks << endl;

    if (s.marks >= 50)
    {
        cout << "Result: Pass" << endl;
    }
    else
    {
        cout << "Result: Fail" << endl;
    }

    return 0;
}

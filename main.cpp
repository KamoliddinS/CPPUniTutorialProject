#include <iostream>
#include <vector>
#include <string>
#include <fstream> // Include the file stream library
using namespace std;

// Structures to hold student data
struct Student
{
    string name;
    int grade;
};

int main()
{
    vector<Student> students;
    int choice;
    
    do
    {
        cout << "GradeBook Manager\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Calculate Average Grade\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        string nameToDelete;
        Student newStudent;
        int total = 0;
        switch (choice)
        {
        case 1:
            cout << "Enter student's name: ";
            cin >> newStudent.name;
            // newStudent.name = "John";
            cout << "Enter student's grade: ";
            cin >> newStudent.grade;
            // newStudent.grade = 100;
            students.push_back(newStudent);
            break;
        case 2:
            for (const Student &s : students)
            {
                cout << s.name << ": " << s.grade << endl;
            }
            break;
        case 3:
            
            for (const Student &s : students)
            {
                total += s.grade;
            }
            cout << "Average Grade: " << (students.empty() ? 0 : total / students.size()) << endl;
            break;

        case 9:
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
        }
    } while (choice != 9);

    return 0;
}

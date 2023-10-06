#include <iostream>
#include <vector>
#include <string>

using namespace std;


struct Student
{
    string name;
    int grade;
};

int main(){
    vector<Student> students ; 
    int choice = 0;

    do{
        cout << "GradeBook Manager\n";
        cout << "1. Add Student\n";
        cout << "2.Display Studnets\n";
        cout << "3.Exit\n";
        cin >> choice;
        cin.clear();
        cin.ignore();
        switch (choice)
        {
        case 1:
            {
                Student newStudent;
                cin.clear();
                cin.ignore();
                cout << "Enter name: ";
                cin >> newStudent.name;
                cout << "Enter grade: ";
                cin >> newStudent.grade;
                students.push_back(newStudent);
                break;
            }
        case 2: 
            {
                for (int i = 0; i < students.size(); i++)
                {
                    cout << students[i].name << " " << students[i].grade << endl;
                }
                break;
            }

        default:
            break;
        }
    }while (choice !=3);
    




    return 0; 
}
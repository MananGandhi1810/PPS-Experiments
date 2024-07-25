#include <iostream>
#include <string.h>

using namespace std;

struct student
{
    int code = 0;
    char name[30] = "";
    float marks = 0;
    int dept_number = 0;
};

int main()
{
    int input, std_location, i;
    char choice, std_name[30], repeat = 'Y';
    student students[120];
    do
    {
        system("cls");
        cout << "Student Management System:\n\n1. Register New Student\n2. Display Student Info\n3. Update Student\n4. Exit\n\n";
        cin >> input;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(512, '\n');
            cout << "\n\nInvalid Character!\n";
            break;
        }
        switch (input)
        {
        case 1:
            system("cls");
            std_location = -1;
            for (i = 0; i < 120; i++)
            {
                if (strcasecmp(students[i].name, "") == 0)
                {
                    std_location = i;
                    break;
                }
            }
            if (std_location == -1)
            {
                cout << "Student Database Full!";
                break;
            }
            cout << "Enter details for new student\n\nCode: ";
            cin >> students[std_location].code;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(512, '\n');
                cout << "\n\nInvalid Code!";
                break;
            }
            cout << "Name: ";
            cin >> students[std_location].name;
            cout << "Marks: ";
            cin >> students[std_location].marks;

            cout << "Department No: ";
            cin >> students[std_location].dept_number;
            cout << endl;
            cout << "\nSuccessfully Registered Student!";
            break;
        case 2:
            system("cls");
            cout << "Enter Student Name: ";
            cin >> std_name;
            std_location = -1;

            for (i = 0; i < 120; i++)
            {
                if (strcasecmp(students[i].name, std_name) == 0)
                {
                    std_location = i;
                    break;
                }
            }
            if (std_location == -1)
            {
                cout << "\nStudent not found!\n";
                break;
            }
            system("cls");
            cout << "Student: " << students[std_location].name << "\n";
            cout << "\nDisplay:\n\na) All Details\nb) Student Code\nc) Student Marks\nd) Student Department\n\n";
            cin >> choice;
            system("cls");
            switch (choice)
            {
            case 'a':
                cout << "Student Details:\n\nName: " << students[std_location].name << "\nCode: " << students[std_location].code << "\nMarks: " << students[std_location].marks;
                if (students[std_location].dept_number == 1)
                {
                    cout << "\nDepartment: Computer Science";
                }
                else if (students[std_location].dept_number == 2)
                {
                    cout << "\nDepartment: Mechanical";
                }
                else if (students[std_location].dept_number == 3)
                {
                    cout << "\nDepartment: Data Science";
                }
                else if (students[std_location].dept_number == 4)
                {
                    cout << "\nDepartment: Mechatronics";
                }
                break;
            case 'b':
                cout << "Student Details:\n\nName: " << students[std_location].name << "\nCode: " << students[std_location].code;
                break;
            case 'c':
                cout << "Student Details:\n\nName: " << students[std_location].name << "\nMarks: " << students[std_location].marks;
                break;
            case 'd':
                cout << "Student Details:\n\nName: " << students[std_location].name;
                if (students[std_location].dept_number == 1)
                {
                    cout << "\nDepartment: Computer Science";
                }
                else if (students[std_location].dept_number == 2)
                {
                    cout << "\nDepartment: Mechanical";
                }
                else if (students[std_location].dept_number == 3)
                {
                    cout << "\nDepartment: Data Science";
                }
                else if (students[std_location].dept_number == 4)
                {
                    cout << "\nDepartment: Mechatronics";
                }
                break;
            default:
                system("cls");
                cout << "Invalid Option!";
                break;
            }
            break;
        case 3:
            system("cls");
            cout << "Enter Student Name: ";
            cin >> std_name;
            std_location = -1;
            for (i = 0; i < 120; i++)
            {
                if (strcasecmp(students[i].name, std_name) == 0)
                {
                    std_location = i;
                    break;
                }
            }
            if (std_location == -1)
            {
                cout << "\nStudent not found!\n";
                break;
            }
            system("cls");
            cout << "Student: " << students[std_location].name << "\n";
            cout << "\nUpdate:\n\na) All Details\nb) Student Code\nc) Student Marks\nd) Student Department\n\n";
            cin >> choice;
            switch (choice)
            {
            case 'a':
                cout << "\nEnter new details for " << students[std_location].name << ":\nCode: ";
                cin >> students[std_location].code;
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(512, '\n');
                    cout << "\n\nInvalid Code!";
                    break;
                }
                cout << "Marks: ";
                cin >> students[std_location].marks;
                cout << "Department No: ";
                cin >> students[std_location].dept_number;
                break;
            case 'b':
                cout << "\nEnter new Code for " << students[std_location].name << ": ";
                cin >> students[std_location].code;
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(512, '\n');
                    cout << "\n\nInvalid Code!";
                    break;
                }
                break;
            case 'c':
                cout << "\nEnter new Marks for " << students[std_location].name << ": ";
                cin >> students[std_location].marks;
                break;
            case 'd':
                cout << "\nEnter new Department No for " << students[std_location].name << ": ";
                cin >> students[std_location].dept_number;
                break;
            default:
                system("cls");
                cout << "Invalid Option!";
                break;
            }
            break;
        case 4:
            repeat = 'N';
            break;
        default:
            system("cls");
            cout << "Invalid Option!";
            break;
        }
        if (repeat != 'n' && repeat != 'N')
        {
            cout << "\n\n\nWould you like to continue? (Y/n)\n";
            cin >> repeat;
        }

    } while (repeat != 'n' && repeat != 'N');
}

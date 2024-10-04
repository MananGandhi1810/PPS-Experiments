/*
Create a student record (name, rollno, marks of 3 subjects and score), calculate the average, store average in a score data member.
If score<40, declare FAIL else PASS along with student details, maintain 10 students records. (make use of member function to read and display records)
*/
#include <iostream>

using namespace std;

class Student
{
    string name;
    string roll_num;
    float score;
    float marks[3];
    string result;

public:
    void getData();
    void showData();
    void calculate();
};

void Student::getData()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> roll_num;
    cout << "Enter marks: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Subject 1: ";
        cin >> marks[i];
    }
}

void Student::showData()
{
    cout << "Name: " << name << endl
         << "Roll Number: " << roll_num << endl
         << "Score: " << score << endl
         << "Result: " << result << endl;
}

void Student::calculate()
{
    int total_marks = 0;
    for (int i = 0; i < 5; i++)
    {
        total_marks += marks[i];
    }
    score = float(total_marks / 5);
    if (score < 40)
    {
        result = "FAIL";
    }
    else
    {
        result = "PASS";
    }
}

int main()
{
    Student s[10];
    for (int i = 0; i < 10; i++)
    {
        s[i].getData();
        s[i].calculate();
    }
    for (int i = 0; i < 10; i++)
    {
        s[i].showData();
    }
    return 0;
}
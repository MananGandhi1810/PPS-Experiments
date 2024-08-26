/*
Write a program using classes to accept 10 students data
*/

#include <iostream>
#define num_courses 4
using namespace std;

class Student
{
private:
    int marks[num_courses];
    string name;
    float avg_marks;

public:
    void getData();
    void showData(int);
};

void Student::getData()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter marks:" << endl;
    float sum = 0;
    for (int i = 0; i < num_courses; i++)
    {
        cout << "Course " << i + 1 << ": ";
        cin >> marks[i];
        sum += marks[i];
    }
    avg_marks = sum / num_courses;
}

void Student::showData(int min_marks)
{
    if (avg_marks < min_marks)
    {
        return;
    }
    cout << "Student Name: " << name << endl;
    cout << "Average Marks: " << avg_marks << endl;
}

int main()
{
    int n = 0;
    cout << "Enter number of students: ";
    cin >> n;
    Student students[n];
    for (int i = 0; i < n; i++)
    {
        students[i].getData();
    }
    int min_marks = 0;
    cout << "Enter minimum marks: ";
    cin >> min_marks;
    for (int i = 0; i < n; i++)
    {
        students[i].showData(min_marks);
    }
}
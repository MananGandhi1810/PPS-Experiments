#include <iostream>

using namespace std;

class Student
{
  string name;
  string roll_num;
  int total_marks;
  float avg_marks;
  char grade;
  int marks[5];

public:
  Student()
  {
    name = "Manan";
    roll_num = "C146";
    total_marks = 0;
    avg_marks = 0.0;
    grade = 'N';
  }
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
  for (int i = 0; i < 5; i++)
  {
    cout << "Subject 1: ";
    cin >> marks[i];
  }
}

void Student::showData()
{
  cout << "Name: " << name << endl
       << "Roll Number: " << roll_num << endl
       << "Total Marks: " << total_marks << endl
       << "Average Marks: " << avg_marks << endl
       << "Grade: " << grade << endl;
}

void Student::calculate()
{
  total_marks = 0;
  for (int i = 0; i < 5; i++)
  {
    total_marks += marks[i];
  }
  avg_marks = float(total_marks / 5);
}

int main()
{
  int num_students;
  cout << "Enter number of students: ";
  cin >> num_students;
  Student s[num_students];
  for (int i = 0; i < num_students; i++)
  {
    s[i].getData();
    s[i].calculate();
  }
  for (int i = 0; i < num_students; i++)
  {
    s[i].showData();
  }
  return 0;
}
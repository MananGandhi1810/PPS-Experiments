/*
Create a class called Time that has separate int member data for hours, minutes and seconds.
One constructor should initialize this data to 0 and another should initialize it to fix values.
A member function displays it, in 11:59:59 format. The final member function should add two objects of type Time passed as arguments.
A main() program should create three initialized objects. Then it should add the two initialized values together, leaving the result in the third Time variable.
Finally it should display the value of this third variable.
*/
#include <iostream>
using namespace std;

class Time
{
    int hours;
    int minutes;
    int seconds;

public:
    Time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    Time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
        if (seconds > 59)
        {
            seconds = seconds % 60;
            minutes++;
        }
        if (minutes > 59)
        {
            minutes = minutes % 60;
            hours++;
        }
        hours = hours % 12;
    }
    void display();
    int getHours();
    int getMinutes();
    int getSeconds();
    void add(Time, Time);
};

void Time::display()
{
    cout << (hours < 10 ? "0" : "") << hours << ":" << (minutes < 10 ? "0" : "") << minutes << ":" << (seconds < 10 ? "0" : "") << seconds;
}

int Time::getHours()
{
    return hours;
}

int Time::getMinutes()
{
    return minutes;
}

int Time::getSeconds()
{
    return seconds;
}

void Time::add(Time t1, Time t2)
{
    seconds = t1.getSeconds() + t2.getSeconds();
    minutes = t1.getMinutes() + t2.getMinutes();
    hours = t1.getHours() + t2.getHours();
    if (seconds > 59)
    {
        seconds = seconds % 60;
        minutes++;
    }
    if (minutes > 59)
    {
        minutes = minutes % 60;
        hours++;
    }
    hours = hours % 12;
}

int main()
{
    Time t1;
    cout << "T1: ";
    t1.display();
    cout << endl;
    Time t2(11, 59, 59);
    cout << "T2: ";
    t2.display();
    cout << endl;
    Time t3;
    t3.add(t1, t2);
    cout << "T3: ";
    t3.display();
    cout << endl;
    return 0;
}
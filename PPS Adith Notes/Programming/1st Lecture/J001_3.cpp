#include<iostream>
using namespace std;
int main()
{
    int shape;
    cout<<"Enter the shape:\n1 - Rectangle\n2 - Circle\n3 - Triangle\n4 - Square\n";
    cin>>shape;
    if(shape==1)
    {
       float length, breadth;
       cout<<"Enter the length\n";
       cin>>length;
       cout<<"Enter the breadth\n";
       cin>>breadth;
       float area = length * breadth;
       cout<<"The area of the rectangle is ";
       cout<<area;
    }
    else if(shape==2)
    {
       float radius;
       cout<<"Enter the radius of the circle\n";
       cin>>radius;
       float area = 3.14 * radius * radius;
       cout<<"The area of the circle is ";
       cout<<area;
    }
    else if(shape==3)
    {
       float base, height;
       cout<<"Enter the height of the triangle\n";
       cin>>height;
       cout<<"Enter the base of the triangle\n";
       cin>>base;
       float area = base * height * 0.5;
       cout<<"The area of the triangle is ";
       cout<<area;
    }
    else if(shape==4)
    {
       float side;
       cout<<"Enter the side of the square\n";
       cin>>side;
       float area = side * side;
       cout<<"The area of the square is ";
       cout<<area;
    }
    return 0;
}

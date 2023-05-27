//WAP to find the area of circle square rectangle and triangle using function overloading without using class
/* C++ program to find Area using Function Overloading  */

#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float,float);
int main()
{
        int side,length,breadth;
        float radius,base,height;
        cout<<"Enter side of a square:";
        cin>>side;
        cout<<"Enter length and breadth of rectangle:";
        cin>>length>>breadth;
        cout<<"Enter radius of circle:";
        cin>>radius;
        cout<<"Enter base and height of triangle:";
        cin>>base>>height;
        cout<<"Area of square is"<<area(side);
        cout<<"\nArea of rectangle is "<<area(length,breadth);
    cout<<"\nArea of circle is "<<area(radius);
    cout<<"\nArea of triangle is "<<area(base,height);
}
int area(int s)//side
{
    return(s*s);
}
int area(int l,int b)//length and breadth
{
    return(l*b);
}
float area(float r)//radius
{
    return(3.14*r*r);
}
float area(float bs,float ht)//base and height
{
   return((bs*ht)/2);
}
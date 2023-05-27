//Wap to do things using class and objects
#include<iostream>
using namespace std;
class shape
{
    public:
    int side;
    int length,breadth;
    float base,height;
    public:
    int area(int s)
    {
        return (s*s);
    }
    int area(int l,int b)
    {
        return  (l*b);
    }
    float area(float bs,float ht)
    {
        return ((bs*ht)/2);
    }
};
int main(){
    shape sq,rt,tr;//sq=square,rt=rectangle,tr=triangle
    cout<<"Enter a side of square:";
    cin>>sq.side;
    cout<<"Enter length and breadth of rectangle:";
    cin>>rt.length>>rt.breadth;
    cout<<"Enter base and height of triangle:";
    cin>>tr.base>>tr.height;
    cout<<"Area of square is "<<sq.area(sq.side);
    cout<<"\nArea of rectangle is "<<rt.area(rt.length,rt.breadth);
    cout<<"\nArea of triangle is "<<tr.area(tr.base,tr.height);
    return 0;
}
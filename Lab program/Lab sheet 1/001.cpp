//WAP using constant qualifier
#include<iostream>
using namespace std;

int main(){
    const float pi=3.14;
    int radius;
    cout<<"Enter Radius:";
    cin>>radius;
    float area=pi*radius*radius;
    cout<<"The area of circle is "<<area<<endl;
    return 0;
}
#include<iostream>
using namespace std;

class A{
    private:
    int a;
    int b;
    public:
    A(){
        a=0;
        b=0;
    }
    A(int x,int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};
class B{
    private:
    int c;
    int d;
    public:
    B(){
        c=0;
        d=0;
    }
    B(int m,int n){
        c=m;
        d=n;
    }
    void show(){
        cout<<"a="<<c<<endl;
        cout<<"b="<<d<<endl;
    }
    // friend void swap(A &a1,B &b1){
    //     int temp=a1.a;
    //     a1.a=b1.c;
    //     b1.c=temp;


// }
};


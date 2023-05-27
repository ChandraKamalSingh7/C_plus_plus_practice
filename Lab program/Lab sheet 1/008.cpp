#include<iostream>
using namespace std;

class Box{
    private:
    int length;
    int breadth;
    int height;
    public:
    void read(){
        cout<<"Enter length: ";
        cin>>length;
        cout<<"Enter breadth: ";
        cin>>breadth;
        cout<<"Enter height: ";
        cin>>height;
    }
    
    void display(){
        int volume=length*breadth*height;
        cout<<"Volume of Box is "<<volume<<endl;
       
        }
        

};
int main(){
    Box b;
    b.read();
    b.display();
    return 0;
}
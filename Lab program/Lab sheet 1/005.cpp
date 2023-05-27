//WAP to add three integer variables using fuction 
// C++ Program to Add Two Numbers Using Functions
#include <iostream>
using namespace std;
void marks_tot(int x=40, int y=40, int z=40);
int main(){
    marks_tot();
    marks_tot(55);
    marks_tot(66,77);
    marks_tot(75,85,92);
    
    return 0;
}
void marks_tot(int x, int y ,int z){
    cout<<"Total marks: "<<(x+y+z)<<endl;
}
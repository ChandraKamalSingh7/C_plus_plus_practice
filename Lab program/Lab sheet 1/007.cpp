#include<iostream>
using namespace std;

class customer
{
    private:
    string name;
    string product;
    int quantity;
    float cost;
    float total_cost;
    float total_price;
    float amount;
    public:
        void setdata()
        {
           cout<<"Enter customer name: ";
           getline(cin,name);
           cout<<"Enter product name: " ;
           cin>>product;
           cout<<"Enter quantity:";
           cin>>quantity;
           cout<<"Enter cost:";
           cin>>cost;
           total_cost=quantity*cost;
           if(total_cost>20000){
                amount=0.05*total_cost;
                total_price=total_cost-amount;
                
            }else{
                amount=0;
                total_price=total_cost;
                            }
           }
        
        void showdata(){
            cout<<"Customer name: "<<name<<endl;
            cout<<"product name: "<<product<<endl;
            cout<<"Amount Paid: "<<total_cost<<endl;
            cout<<"Discounted amount: "<<amount<<endl;
            
            cout<<"Total Price after discount( 5 percent discount if Total cost>20000) :"<<total_price<<endl;

        }
};
int main(){
    customer c1;
    c1.setdata();
    c1.showdata();
    return 0;
}
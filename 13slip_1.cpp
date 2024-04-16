// a) Write a C++ program to create a class Product with
// data members Product_id, Product Name, Qty,
// Price. Write member functions to accept and
// display Product information also display number of objects
// created for Product class.
// (Use Static data member and Static member function) [Marks 15]
#include<iostream>
using namespace std;
class product{
public:

            static void accept(){
                static int c;
                static int pid,qty;
                static char pname[20];
                cout<<"enter pid qty pname:";
                cin>>pid>>qty>>pname;
                cout<<"pid:"<<pid<<endl;
                cout<<"qty:"<<qty<<endl;
                cout<<"pname:"<<pname<<endl;
                c++;
                cout<<"total time call:"<<c;
            }
};
int main(){
    product ob,ob1,ob2;
    ob.accept();
    ob1.accept();
    ob2.accept();
}

// b) Write a C++ program to create a base class Employee (Emp-code, name, salary).
// Derive two classes as
// Fulltime (daily wages, number of days) and 
//Parttime (number of workinghours, hourly wages).
// Write a menu driven program to perform following functions:
// 1. Accept the details of ‘n’ employees and calculate the salary.
// 2. Display the details of ‘n’ employees.
// 3. Display the details of employee having maximum salary for both types of employees.
// [Marks 25]
#include<iostream>
using namespace std;
class emp{
      public: int eno,sal;

             string name;
             void accept(){
                cout<<"enter eno sal name :";
                cin>>eno>>name;
             }
             


};
class ftime:public emp{
public: int daily_w,no_of_days;

void accept(){
    cout<<"daily_w and no_of_days :";
    cin>>daily_w>>no_of_days;

            float sal=daily_w*no_of_days;
            cout<<"\n sal :"<<sal;
}


};

class ptime:public emp{
   public: int no_of_h,h_wages;
            void accept(){
                cout<<"no_of_h and  h_wages :";
                cin>>no_of_h>>h_wages;

            float sal=no_of_h*h_wages;
            cout<<"\n sal :"<<sal;
}





};
int main(){
ftime ob1;
ptime ob;

ob1.accept();
// ob1.accept();

ob.accept();


}

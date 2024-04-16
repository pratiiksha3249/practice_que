// Q. 1)
// a) Consider the following C++ class
// class Person
// { char Name [20];
// charA ddr [30];
// float Salary;
// float tax_ amount;
// public: // member functions
// }s
// Calculate tax amount by checking salary of a person
// e For salary <=20000 tax rate=0
// e For salary >20000||<=40000 tax rate= 5% of salary.
// e For salary >40000 tax rate =10% of salary.
#include<iostream>
using namespace std;

class Person{
       public:
               char name [20];
               char addr [30];
               float salary;
               double tax_amt;

void accept(){
    cout<<"enter name add salary: ";
    cin>>name>>addr>>salary;

        cout<<"name:"<<name<<endl;
    cout<<"addr:"<<addr<<endl;
    cout<<"salary:"<<salary<<endl;
    
}
void cal_tax(){
    // cout<<"name:"<<name<<endl;
    // cout<<"addr:"<<addr<<endl;
    // cout<<"salary:"<<salary<<endl;

    if(salary<=20000){
        cout<<"tax is 0:";
    }
    else if(salary > 20000|| salary <=40000){
            cout<<"tax is 0:"<<salary*10/5;
    }
    else{
            cout<<"tax is 0:"<<salary*10/10;
    }

}
};
int main(){
    Person ob;
    ob.accept();
    ob.cal_tax();
}
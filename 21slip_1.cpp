// Q. 1)
// a) Create a C++ class Employee with data members Emp id, Emp Name, Company Name and 
//Salary.
// Write member functions to accept and display Employee information. 
//Design User defined
// Manipulator to print Salary.
// (For Salary set right justification, maximum width to 7 and 
//fill remaining spaces with ‘*’)[Marks 15]
#include<iostream>
#include<iomanip>
using namespace std;
class employee{
public: int eid,c=0;
          char sal[7];
        char ename[20], cname[20];
        void accept(){
            cout<<"enter eid ename cname sal";
            cin>>eid>>ename>>cname>>sal;
        }
        void disp(){
           cout<<setfill('*');
           cout<<"salary:"<<setw(7)<<sal;
        }
};

int main(){
employee ob;
ob.accept();
ob.disp();

}
// Q. 1)
// a) Write a C++ program to create a class Machine with data members MachineId, Machine Name, Price.
// Create and initialize all values of Machine object by using parameterized constructor and copy
// constructor. Display details of Machine using setw() and setprecision( ). [Marks 15]
// b) Create a C++ class MyMatrix and Write necessary member functions for the following:
#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

class machine{
public:
int mid,price;
char mname[20];

machine(int mid,int price,char mname[20]){
    this->mid=mid;
    this->price;
    strcpy(this->mname,mname);

}
void disp(){
    cout<<"machine id:"<<setw(5)<<mid<<endl;
    cout<<"machine price :"<<setprecision(1)<<price<<endl;
    cout<<"machine name :"<<mname<<endl;
}



};
int main(){
machine ob(11,1809,"moter");
ob.disp();
}
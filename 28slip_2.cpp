// b) Create a C++ class Employee with data members Emp Id, Emp Name, Mobile No, Salary. Write
// necessary member functions for the following:
// i. Accept details of n employees
// ii. Display employee details in descending order of their salary.
// iii. Display details of a particular employee.
// (Use Array of object and Use appropriate manipulators) [Marks 25]

#include<iostream>
using namespace std;
class emp{
public:
             int eid,sal;
             char name[20];
             void accept(){
                cout<<"enter eid sal name :";
                cin>>eid>>sal>>name;
             }
             void disp(){
                cout<<"eid :"<<eid<<endl;
                cout<<"sal:"<<sal<<endl;
                cout<<"name :"<<name<<endl;
             }




};
int main(){
int i,n;
cout<<"enter limit for rec :";
cin>>n;
emp ob[n];
// emp t;

for(i=0;i<n;i++)
ob[i].accept();

for(i=0;i<n;i++)
ob[i].disp();
cout<<"\n"<<"rec display in desending order :"<<endl;
for(int pass=1;pass<n;pass++){
for(i=0;i<n-pass;i++){
         if(ob[i].sal<ob[i+1].sal){
         emp t =ob[i];
         ob[i]=ob[i+1];
         ob[i+1]=t;
         }
}
}

// for(i=0;i<n;i++)
// ob[i].disp();
for(int j=0;j<n;j++)
ob[j].disp();



}
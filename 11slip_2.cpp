// b) Create a base class Student with data members Roll No, Name.
// Derives two classes from it, class
// Theory with data members M1, M2, M3, M4 and class Practical with
// data members P1, P2. Class
// Result(Total Marks, Percentage, Grade) inherits both Theory and
// Practical classes. (Use concept of
// Virtual Base Class and protected access specifiers)
// Write a C++ menu driven program to perform the following functions:
// i. Accept Student Information
// ii. Display Student Information
// 111.Calculate Total _ mrks, Percentage and Grade. [Marks 25]
#include<iostream>
using namespace std;
class student{
    public: int rno;
            char name[20];
            void accepti(){
                cout<<"enter rno name :";
                cin>>rno>>name;
            }
};
class theory:public virtual student{
public: int m1,m2,m3,m4;
            void acceptm(){
         cout<<"enter 4subject marks";
         cin>>m1>>m2>>m3>>m4;

            }

};

class practicle :public virtual student{
         public: int p1,p2;
         void acceptp(){
            cout<<"enter 2 practicles marks";
            cin>>p1>>p2;
         }

};


class result :public theory,public practicle{
public:
void cal(){
    int marks=m1+m2+m3+m4+p1+p2;
    cout<<"total marks="<<marks<<endl;
    cout<<"total marks="<<marks/6<<endl;
       if(marks>50)
       cout<<"A+";
      else if(marks>30)
      cout<<"B+";
      else if(marks>20)
      cout<<"C+";
       if(marks<10)
       cout<<"F";
}



};
int main(){
result ob;
ob.accepti();
ob.acceptm();
ob.acceptp();
ob.cal();
}
















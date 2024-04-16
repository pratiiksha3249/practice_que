// Q. 1)
// a) Create a C++ class Fraction with data
//  members Numerator and Denominator. Write a C++ program to
// calculate and display sum of two fractions.
//  (Use Constructor) [Marks 15]
#include<iostream>
using namespace std;
class fraction{
    public:
    int a,b;
    fraction(int a,int b ){
           this->a=a;
           this->b=b;
    }
    void add(fraction ob,fraction ob1){
           a=ob.a+ob1.a;
           b=ob.b+ob1.b;


cout<<"addition="<<a<<"\t"<<b;
    }
};
int main(){
fraction ob(11,22);
fraction ob1(1,2);
ob.add(ob,ob1);
}
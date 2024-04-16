// Q. 1)
// a) Write a C++ program to create a class Number, which contain static data member ‘cnt’ and member
// function ‘Display()’. Display() should print number of times display operation is performed irrespective
// of the object responsible for calling Display()
#include<iostream>
using namespace std;
class Number{
public:
static void disp(){
    static  int cnt;
    cnt++;
    cout<<"cnt calling counter:"<<cnt<<endl;

}

};
int main(){
    Number ob;
    ob.disp();
    Number ob1;
    ob1.disp();
    Number ob2;
    ob2.disp();
}
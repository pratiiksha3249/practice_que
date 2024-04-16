// b) Create a C++ class ComplexNumber with data members real and imaginary. 
// Write necessary functions:
// i. To accept Complex Number using constructor.
// ii. To display Complex Number in format [x + iy].
// iii.To add two Complex Numbers by using friend function. [Marks 25]
#include<iostream>
using namespace std;
class com_no{
               public:
               int a,b,s=0,s1=0;

               com_no(){
                this->a=a;
                this->b=b;
                cout<<"enter two no :";
                cin>>a>>b;
               }
               void disp(){
                // s=ob.a+ob1.a;
                cout<<"["<<a<<"+ i"<<b<<"]";
                // s1=ob.b+ob1.b;

               }
                friend void add(com_no ob,com_no ob1);




};

void add (com_no ob,com_no ob1){
    int a,b,s=0,s1=0;
s=ob.a+ob1.a;
cout<<"\n first imagary number sum is :"<<s;
s1=ob1.b+ob1.b;
cout<<"\n secoud imagary number sum is :"<<s1;

}
int main(){
com_no ob,ob1;
ob.disp();
ob1.disp();
add(ob,ob1);
}
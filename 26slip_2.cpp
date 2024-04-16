// b) Create a C++ class Time with data members hours,
// minutes, seconds. Write a C++ program using
// operator overloading to perform the following:
// i. != To check whether two Times are equal or not.
// ii. >> To accept the time.
// iii. << To display the time. [Marks 25]
#include<iostream>
using namespace std;
class Time{
    public:int hh,mm,ss;

    void operator>>(Time &ob){
        cout<<"enter hh mm ss";
        cin>>hh>>mm>>ss;
    }
    void operator<<(Time &ob1){

        cout<<"\n hh :"<<hh;
        cout<<"\nmm :"<<mm;
        cout<<"\nss :"<<ss;
    }
    void operator!=(Time &ob1){
       if(hh!=ob1.hh)
       cout<<"\n times are not equal:";
       else
       cout<<"\n times are equal :";


    }
};
int main(){
Time ob,ob1;
ob>>ob1;
ob<<ob1;
ob!=ob1;
}
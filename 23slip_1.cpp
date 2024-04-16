// Q. 1)
// a) Create a C++ class MyString with data member character pointer. 
//Write a C++ program to accept and
// display a string. Overload ‘+’ operator to concatenate two strings. [Marks 15
#include<iostream>
using namespace std;
#include<string.h>
class Mstr{
         public: char s[20];
         void accept(){
            cout<<"enter string :";
            cin>>s;
         }
         void operator+(Mstr &ob1){
           strcat(s,ob1.s);  
           cout<<s;

         }

};
int main(){
    Mstr ob,ob1;
    ob.accept();
    ob1.accept();
    ob+ob1;
}
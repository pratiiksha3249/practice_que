// Q. 1)
// a) Write a C++ program to define two function templates for
// calculating the square and cube of given
// numbers with different data types. [Marks 15]
#include<iostream>
using namespace std;
template<class T1>
void sqare(T1 a,T1 b){
T1 s=a*a;
T1 c=b*b*b;
cout<<"sqare of givan no is :"<<s<<endl;
cout<<"cube of givan no is :"<<c<<endl;
}

int main(){
sqare(10,20);
sqare(12.1f,20.1f);
}










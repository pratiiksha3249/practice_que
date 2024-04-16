// Q. 1)
// a) Write a C++ program to accept radius of a Circle. 
//Calculate and display diameter, circumference as well
// as area of a Circle. (Use Inline function) [Marks 15]
#include<iostream>
using namespace std;
inline float diameter(float r){
    return 2*r*r;

}
inline float cir(float r){
    return 2*3.14*r;

}
inline float area(float r){
    return 3.14*r*r;

}

int main(){
float r,d,c,a;
cout<<"enter radius :";
cin>>r;
d=diameter(r);
cout<<"\n diameter of cicle is :"<<d<<endl;
c=cir(r);
cout<<"\n circumference of cicle is :"<<c<<endl;
a=area(r);
cout<<"\n area of Circle is :"<<a<<endl;
}

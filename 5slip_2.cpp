// b) Create a C++ base class Shape. Derive three different classes Circle, 
//Sphere and Cylinder from shape
// class. Write a C++ program to calculate area of Circle, Sphere and Cylinder.
// (Use pure virtual
// function)

#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void area()=0;
};

class Circle:public Shape{
    public:
    float r;
    void area(){
    cout<<"enter redius of circle:"<<endl;
    cin>>r;
cout<<"area of circle is:"<<endl<<3.14*r*r;
    }
};

class sphere:public Shape{
public:
float r;
void area(){
    cout<<"enter redius of sphere:"<<endl;
    cin>>r;
    cout<<"sphere area is:"<<endl<<4*3.14*r*r;
}

};

class cylinder:public Shape{
    public:
    //2π r h + 2π r
    float r,h;
    void area(){
         cout<<"enter redius and height:"<<endl;
         cin>>r>>h;
         cout<<"cylinder area is:"<<endl<<2*3.14* r *h + 2*3.14* r;

    }
};

int main(){
Circle ob;
ob.area();

sphere ob1;
ob1.area();

cylinder ob2;
ob2.area();

}
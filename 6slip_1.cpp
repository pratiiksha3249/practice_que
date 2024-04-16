// Q. 1)
// a) Write a C++ program to create two Classes Square and Rectangle.
//  Compare area of both the shapes
// using friend function.
//  Accept appropriate data members for both the classes. [Marks 15]
#include<iostream>
using namespace std;
class rec;
class sqare{
    private:float l;
    public:
    void accept(){
        cout<<"enter l:";
        cin>>l;
    }
void cal(){
    float s=l*4;
}
 friend void cal1(float s);
};

   
class rec{
    private:float l,b;
    public:
    void accept(){
        cout<<"enter l b :";
        cin>>l>>b;
    }
    void cal2(){
        float r=l*b;
    }

    friend void cal1(float r);
};

void cal1(float s , float r){
    if(s!=r){
        cout<<"both area not same :";
    }
    else{
        cout<<"both area same :";
    }

}
int main(){
 sqare ob;
 rec ob1;
 ob.accept();
 ob.cal();
 ob1.accept();
 ob1.cal2();
cal1(3.4,6.3);
}

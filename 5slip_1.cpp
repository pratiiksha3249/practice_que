// Q. 1)
// a) Consider the following C++ class
// class Point
// { .
// int x,y;
// public:
// void setpoint(int, int); // To set the values of x and y co-ordinate.
// void showpoint(); // To display co-ordinate of a point P in format (x, y).
// };

#include<iostream>
#include<math.h>
using namespace std;
class Point{
public: int x1,y1,x2,y2;
void accept(){
    cout<<"enter value of x1 x2 and y1 y2::";
    cin>>x1>>y1>>x2,y2;
}
void disp(){
    long int d= sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
cout<<"distance="<<d;
}

};
int main(){
    Point ob;
    ob.accept();
    ob.disp();
}
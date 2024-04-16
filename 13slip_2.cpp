// b) Create a C++ class Cuboid with
// data members length, breadth, and height. Write necessary member
// functions for the following:
// i. void setvalues(float,float,float) to set values of data members.
// ii. void getvalues( ) to display values of data members.
// iii. float volume( ) to calculate and return the volume of cuboid.
// iv. float surface_area( ) to calculate and return the surface area of cuboid.
// (Use Inline function) [Marks 25]
#include<iostream>
using namespace std;
class Cuboid{
    public: float l, b,h;
              void setvalue(float l1,float b1,float h1){
             l=l1;
             b=b1;
             h=h1;

              }
              void getvalue(){
                cout<<"display values:";
                cout<<l<<"\t"<<b<<"\t"<<h<<"\t"<<endl;
              }

            inline  float cal(){
                    return l*b*h;
              }
};
int main(){
    Cuboid ob;
    float l=10.1,b=2.1,h=3.1;
    ob.setvalue(l,b,h);
    ob.getvalue();
   cout<<"volume of cuboid:"<<ob.cal();
}

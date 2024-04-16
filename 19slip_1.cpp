// Q. 1)
// a) Write a C++ program to create a class Distance with data members meter 
// and centimeter to represent
// distance. Write a function Larger( ) to return the larger of two distances. 
// (Use this pointer)
// [Marks 15]

#include<iostream>
using namespace std;
class dist{
              public:float meter,cen_meter;
              void accept(){
                cout<<"enter meter and cen_meter ";
                cin>>meter>>cen_meter;
              }
              void cal(){
                float d;
                d=meter+cen_meter;
                cout<<d<<endl;
              }
              void disp(){
                cout<<"meter meter =:"<<meter<<"\t"<<cen_meter;
              }
              dist large (dist ob,dist ob1){
                if(ob.meter>ob1.meter){
                    return ob;
                }
                else{
                    return ob1;
                }
              }
};
int main(){
dist  ob,ob1,ob3;
ob.accept();
ob.cal();
ob1.accept();
ob1.cal();
 ob3=ob3.large(ob,ob1);
 ob3.disp();


}
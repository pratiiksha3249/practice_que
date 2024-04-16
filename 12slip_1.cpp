// Q. 1)
// a) Write a C++ program to create a class Date with
// data members day, month, and year. Use default and
// parameterized constructor to initialize date and display 
//date in dd-Mon-yyyy format. (Example: Input:
// 04-01-2021 Output: 04-Jan-2021) [Marks 15]

#include<iostream>
#include<string.h>
using namespace std;
class Date{
    public: int dd,mm,yy;
               
               Date(){
                       dd=1;
                       mm=2;
                       yy=2024;
               }
               Date(int dd,int mm,int yy){
                  this->dd=dd;
                  this->mm=mm;
                  this->yy=yy;
               }
                  void disp(){
                  if(mm==1)
                        cout<<dd<<":"<<"\tjan"<<"\t:"<<yy;
                  
                  if(mm==2)
                        cout<<dd<<":"<<"\tfeb"<<"\t:"<<yy;
                  
                  if(mm==3)
                        cout<<dd<<":"<<"\tmar"<<"\t:"<<yy;
                  
                  if(mm==4)
                        cout<<dd<<":"<<"\tapr"<<"\t:"<<yy;
                  
                  if(mm==5)
                        cout<<dd<<":"<<"\tmay"<<"\t:"<<yy;
                  
               }

};  

int main(){
    Date ob;
    ob.disp();
}

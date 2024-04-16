
// a) Create a C++ class Student with data members Roll no, SName, Class, Percentage. Accept two
// students information and display information of student having maximum percentage. (Use this
// pointer)15marks
#include<iostream>
#include<string.h>
using namespace std;
class student{
public:
 int rno,per;
  char sname[20],class_s[20];
                    student(int rno ,int per,char sname[20],char class_s[20]){

                           this->rno=rno;
                           this->per=per;
                           strcpy(this->sname,sname);
                           strcpy(this->class_s,class_s);
                           
                    }
                           void disp(){
                            cout<<"rec info:"<<endl;
                            cout<<rno<<endl;
                            cout<<per<<endl;
                            cout<<sname<<endl;
                            cout<<class_s<<endl;
                           }

};
int main(){
student ob(1,90,"sai","fy");
student ob1(1,80,"sairan","sy");;
if(ob.per>ob1.per){
    ob.disp();
}
else{
    ob1.disp();
}
}
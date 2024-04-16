// b) Create a C++ class’ VisitingStaff with data members Name, No ofSubjects,
// Name ofSubjects[],Working hours, Total Salary. 
//(Number of subjects varies for a Staff).Write a
// parameterized constructor to initialize the
// data members and create an array for Name _ ofSubjects
// dynamically. Display Visiting Staff details by calculating salary. 
//(Assume remuneration Rs. 300 per
// working hour 25marks
#include<iostream>
using namespace std;
class vstaff{
public:
        int h,t_sal,no_of_sub;
        char *name_of_sub;
        vstaff(int h,int no_of_sub,char *name_of_sub){
            this->h=h;
            this->no_of_sub=no_of_sub;
            this->name_of_sub=name_of_sub;
            name_of_sub=new char[1];
        }
        void disp(){
               cout<<"salary :"<<h*300;
        }
};
int main(){
vstaff ob(2,3,"c");
ob.disp();

}

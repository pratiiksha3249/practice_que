// Q. 1)
// a) Create a C++ class College, with data members
// CollegeId, College Name, Establishment_year,
// University Name. Overload operators>> and << to accept and
// display College information.
// [Marks 15]
#include<iostream>
using namespace std;
class College{
    public:int cno;
           string name;

    void operator>>(College &ob){
        cout<<"enter cno name:";
        cin>>cno>>name;
    }
    void operator<<(College &ob1){

        cout<<"\ncno :"<<cno;
        cout<<"\nname :"<<name;
    }
    
};
int main(){
College ob,ob1;
ob>>ob1;
ob<<ob1;
}
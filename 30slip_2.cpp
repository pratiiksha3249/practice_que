
// b) Create a C++ class Marksheet with data members Seat_No, Student_Name, Class, Subject_Name[],
// Int Marks[], Ext Marks[], Total[], Grand Total, Percentage, Grade. 
//Write member function to accept
// Student information for 5 subjects. Calculate Total, Grand_Total,
// Percentage, Grade and use setw(),
// setprecision(and setfill()to display Marksheet. [Marks 25]
#include<iostream>
#include<iomanip>
using namespace std;
class marks{
public: int sno ,i_marks[10],e_marks[10],sum=0,sum1=0;
          char sclass[20],name[20];
          void accept(){
               cout<<"enter sno scalss name :"<<endl;
            cin>>sno>>sclass>>name;
            for(int i=0;i<5;i++){

            cout<<"i_marks e_marks "<<endl;
            cin>>i_marks[i]>>e_marks[i];

            }

          }
          void disp(){
            for(int i=0;i<5;i++){
                sum=sum+i_marks[i];
                sum1=sum1+e_marks[i];

            }
            cout<<"internal marks is :"<<setfill('*')<<sum/5;
            cout<<"\n external marks is :"<<setw(2)<<sum1/5;
          }



};
int main(){
    marks ob;
    ob.accept();
    ob.disp();
}
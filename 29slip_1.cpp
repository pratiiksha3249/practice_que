// Q. 1)
// a) Write a C++ program to create a class EBill with 
//data members Cust Name, Meter ID, No ofUnits
// and Total Charges. Write member functions to accept and display customer 
//information by calculating
// charges. (Rules to calculate electricity board charges)
// ° For first 100 units : Rs. 1 per unit
// ° For next 200 units : Rs. 2 per unit
// e Beyond 300 units_: Rs. 5 per unit
// All users are charged a minimum of Rs.150.
// If the total charge is more than Rs.250.00 then an
// additional charge of 15% is added. [Marks 15]
#include<iostream>
using namespace std;
class bill{
        public:int no_of_u;
        void accept(){
            cout<<"ener number of units :";
            cin>>no_of_u;
        }
          void disp(){
            if(no_of_u>100 || no_of_u <200){
                cout<<"charges is :"<<no_of_u*1;
            }
           else if(no_of_u>300){
                cout<<"charges is :"<<no_of_u*5;
            }

            if(no_of_u>250){
              float f=  no_of_u*15/100;

                cout<<"charges is :"<<f+no_of_u;
            }
          }

};
int main(){
bill ob;
ob.accept();
ob.disp();
}























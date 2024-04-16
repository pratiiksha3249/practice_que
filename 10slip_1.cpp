// Q.1
// a) Write a C++ program to create a
//  class Account with data members Acc_number, Acc _type and Balance.
// Write member functions to accept and display ‘n’ account details.
//  (Use dynamic memory allocation)
#include<iostream>
using namespace std;
class Account{
    public:
    int *cno,*bal;
    char *atype[20];

   
    
          Account() {
              static int c=0;
            cno=new int(100);
            // atype= new char("saving");
            bal=new int (10000);
            c++;
            cout<<"total time objec calling..."<<c<<endl;
          }

    
};
int main(){
    Account ob;
    Account ob1;
    Account ob2;
    Account ob4;
    
}
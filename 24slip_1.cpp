// Q. 1)
// a) Create a C++ class FixDeposit with data members
// FD No, Cust Name, FD Amt, Interest rate, Maturity
// amt, Number_of_ months. Create and Initialize all 
//values of FixDeposit object by using parameterized
// constructor with default value for interest rate.
// Calculate maturity amt using interest rate and display
// all the details 15marks
#include<iostream>
#include<string.h>
using namespace std;
class fixdep{
public:int fdno,no_of_month,in_rate,mamt,fdamt;
        char cname[20];
        fixdep(int fdno,int no_of_month,int mamt,char cname[20],int fdamt,int in_rate=4){
      this->fdno=fdno;
      this->no_of_month=no_of_month;
      this->in_rate=in_rate;
      this->mamt=mamt;
      strcpy(this->cname,cname);
      this->fdamt=fdamt;
        }
void disp(){
 int MV = (fdamt * in_rate *no_of_month )/100;
 cout<<"total maturity amt using interest rate "<<MV<<endl;
}



};
int main(){

fixdep ob(1,5,200,"sai",2000);
ob.disp();

}








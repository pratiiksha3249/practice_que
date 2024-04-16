
// b) Write a C++ class Seller (S Name, Product name, Sales Quantity, 
//Target Quantity, Month,
// Commission). Each salesman deals with a separate product and is
// assigned a target for a month. At the
// end of the month his monthly sales is compared with target and 
//commission is calculated as follows:
// e If Sales Quantity>Target Quantity then commission is 25% of 
//extra sales made + 10% of target.
// e If Sales Quantity = Target_Quantity then commission is 10% of target.
// e Otherwise commission is zero.
// Display salesman information along with commission obtained. 
//(Use array of objects)[Marks 25] 
#include<iostream>
using namespace std;
class saller{
            public: int sales_qty,target,com;

            void accept(){
                cout<<"enter sales_qty target ";
                cin>>sales_qty>>target;
            }

            void cal(){
                if(sales_qty==target){
                     com=sales_qty*10/100;
                     cout<<"commition is :"<<com;
                }
             else   if(sales_qty>target){
                     com=sales_qty*25/100;
                     cout<<"commition is :"<<com;
                }
                else{
                 cout<<"comition is zero :";
            }
                    
                
            }


};
int main(){
saller ob;
ob.accept();
ob.cal();

}
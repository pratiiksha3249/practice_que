// b) Create a C++ class InvoiceBill with data members Order id, ODate, Customer Name,   
// No_of Products, Prod Name[], Quantity[], Prod Price[].
// A Customer can buy ‘n’ products. Accept
// quantity for each product. Generate and Display the bill 
//using appropriate Manipulators.
// (Use new operator) [Marks 25]
#include<iostream>
using namespace std;
class iBill{
public: int id,date1,*qty,*price,n,sum;
              char pname[20];
              void accept(){
                     cout<<"enter limit for products :";
                     cin>>n;

                     qty=new int[n];
                     price=new int[n];

                     for(int i=0;i<n;i++){
                        cout<<"enter id date1 pname ";
                        cin>>id>>date1>>pname;

                     }
                     cout<<"enter quntity of product :"<<endl;
                     for(int j=0;j<n;j++)
                        cin>>qty[j];
                       
                        cout<<"enter price of product :"<<endl;
                     for(int j=0;j<n;j++)
                        cin>>price[j];
                    
                       }
                       
                       void disp(){

                    for(int k=0;k<n;k++){
                      sum=qty[k]*price[k];
                      cout<<sum<<"\t";
                    }

                       }
};

int main(){
iBill ob;
ob.accept();
ob.disp();
}

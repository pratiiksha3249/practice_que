// b) Create a C++ class for inventory of Mobiles with data members Model, Mobile
// _Company, Color, Price and Quantity. Mobile can be sold, if stock is available,
// otherwise purchase will
// be made. Write necessary member functions for the following:
// i. To accept mobile details from user.
// ii. To sale a mobile. (Sale contains Mobile details & number of mobiles to be sold.)
// iii. To Purchase a Mobile. (Purchase contains Mobile details & 
//number of mobiles to be purchased)
// [Marks 25]
#include<iostream>
using namespace std;
class mobile{
public:
int mid,price,stock,no_of_con,pcon,scon;
char mname[20],mno[20];

void acceptm(){
    cout<<"enter mobile dit mid price mname mno stock pcon scon:";
    cin>>mid>>price>>mname>>mno>>stock>>pcon>>scon;
}
void disp(){
    cout<<"enter mobile dit mid price mname mno stock pcon scon:";
    cout<<"\t"<<mid<<"\t"<<price<<"\t"<<mname<<"\t"<<mno<<"\t"<<stock<<"\t"<<pcon<<"\t"<<scon<<endl;
}
void sale(){
   cout<<" u can sale mobiles enter mname no_of_con mno for sale:";
   cin>>mname>>no_of_con>>mno;
}
void disps(){
    cout<<"mname"<<"\t"<<mname<<"\t"<<no_of_con<<"\t"<<mno<<"\t"<<"sale done ";
}
void purchas(){
    cout<<" u can purchas mobiles enter mname no_of_con mno for purchase :";
   cin>>mname>>no_of_con>>mno;
}
void dispp(){
        cout<<"mname"<<"\t"<<mname<<"\t"<<no_of_con<<"\t"<<mno<<"\t"<<"purchase done ";

}

};
int main(){
mobile ob;
ob.acceptm();
ob.disp();

if(ob.stock>ob.scon){
    ob.sale();
    ob.disps();
}
else{
    ob.purchas();
    ob.dispp();
}
}

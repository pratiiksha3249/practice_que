// b) Create a C++ base class Media. Derive two different classes from it,
// class NewsPaper with data
// members NName, N Editor, NPrice, No ofPages and class Magazine with 
//data members MName,
// M_Editor, MPrice. Write a C++ program to accept and display 
//information of both NewsPaper and
// Magazine. marks 25
#include<iostream>
#include<string.h>
using namespace std;
class media{
public:
            virtual void acceptn()=0;
            virtual void acceptm()=0;
};
class newspaper:public media{
public:
int nprice,no_of_page;
char name[20],editor[20];

void acceptn(){
    cout<<"enter nprice no_of_page name editor:"<<endl;
    cin>>nprice>>no_of_page>>name>>editor;
}
void dispn(){
    cout<<nprice<<"\t"<<no_of_page<<"\t"<<name<<"\t"<<editor;
}


};
class Magazine
{
public:
char meditor[20];
int mprice;
void acceptm(){
    cout<<"enter magazine info meditor mprice :";
    cin>>meditor>>mprice;
    cout<<endl;

}
void dispm(){
    cout<<"magazine info is:"<<endl;
        cout<<meditor<<"\t"<<mprice;
}

};

int main(){

newspaper ob;
ob.acceptn();
ob.dispn();
Magazine ob1;
ob1.acceptm();
ob1.dispm();
}

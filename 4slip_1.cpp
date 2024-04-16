#include<iostream>
using namespace std;
class a{
    public:
int w_hr,sal,p_rate;
char wname[20];

void accept(int w_hr,char wname[20],int p_rate=100){

cout<<"\n w_hr is :"<<w_hr;
cout<<"\n wname is :"<<wname;
cout<<"\n salary is :"<<p_rate*w_hr;
}

};
int main(){
a ob;
ob.accept(2,"sai",300);
}
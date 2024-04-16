
// b) Create a C++ class Time with data members Hours, Minutes and Seconds.
// Write necessary member
// functions for the following: (Use Objects as arguments)
// i. To accept a time.
// i. To display a time in format hh:mm:ss.
// 111. To find difference between two time and display it in format hh:mm:ss.
#include<iostream>
using namespace std;
class Time{
        public: int hh,mm,ss;
        void accept(){
            cout<<"enter time hh mm ss"<<endl;
            cin>>hh>>mm>>ss;

        }
        void disp(){
            cout<<hh<<":"<<mm<<":"<<hh<<endl;
        }
        static void dispdif(Time ob,Time ob1){
              int h,m,s;
              if(ob.hh>ob1.hh){
                h=ob.hh-ob1.hh;
                m=ob.mm-ob1.mm;
                s=ob.ss-ob1.ss;
              }
              else{
                h=ob1.hh-ob.hh;
                m=ob1.mm-ob.mm;
                s=ob1.ss-ob.ss;
              }


        cout<<"diff time is:"<<h<<":"<<m<<":"<<s;
        }

};
int main(){
Time ob,ob1;
ob.accept();
ob1.accept();
ob.disp();
ob1.disp();
Time::dispdif(ob,ob1);

}
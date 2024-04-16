// b) Create a C++ class City with data members City_code, City_name, population. 
//Write necessary member
// functions for the following:
// i. Accept details of n cities
// ii. Display details of n cities in ascending order of population.
// iii. Display details of a particular city.
// (Use Array of object and to display city information use manipulators.) 
//[Marks 25]
#include<iostream>
using namespace std;
#include<string.h>
class City {
    public: int ccode,popul;
            char cname[20];
            void accept(){
                cout<<"enter c_code population cname:"<<endl;
                cin>>ccode>>popul>>cname;
            }
            void sortBypop(){

            }

};
int main(){
    int n;
    char cityName[20];
    cout<<"enter limit:"<<endl;
    cin>>n;
    City ob[n];
    
    for(int i=0;i<n;i++){
      ob[i].accept();
    }
    for(int pass=1;pass<n;pass++){
               for(int i=0;i<n-pass;i++){
                      if(ob[i].popul>ob[i+1].popul){
                        City t=ob[i];
                        ob[i]=ob[i+1];
                        ob[i+1]=t;

                      }
               }
    }
    for(int i=0;i<n;i++){
           cout<<ob[i].ccode<<"\t"<<ob[i].popul<<"\t"<<ob[i].cname<<endl;
    }
 cout<<"enter city name for search:";
 cin>>cityName;

 for(int i=0;i<n;i++){
              if(strcmp(ob[i].cname,cityName)==0){
                cout<<"recode:"<<ob[i].ccode<<"\t"<<ob[i].popul<<"\t"<<ob[i].popul<<endl;
              }
 }

}
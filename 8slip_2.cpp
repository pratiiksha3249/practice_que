// b) Create a C++ class Person with
// data members Person name, Mobile number, Age, City. Write
// necessary member functions for the following:
// i. Search the mobile number of given person.
// ii. Search the person name of given mobile number.
// iii. Search all person details of given city.
// (Use function overloading) [Marks 25]
// #include<iostream>
// using namespace std;
// #include<string.h>
// // Person ob[100];
// int n,i;
// class Person{
// public: char name[20],name1[20],city[20];
//        long int phone;
//        int age;

//        void accept(){
//         cout<<"ente person name phone and age:"<<endl;
//         cin>>name>>phone>>age>>city;
//        }

//        void searchphone(char name1[20]){
//               //     cout<<"enter name to search rec :";
//               //     cin>>name1;
//            for(int i=0;i<n;i++){
//                   if(strcmp(ob[i].name,name1)==0){
//                           cout<<ob[i].phone<<endl;
//                           break;
//                   }
//            }    

//        }
// }ob[100],obj;

// int main(){
// // int n;
// char city[20];
//  cout<<"enter limit";
//  cin>>n;
// // Person ob[n];
//  for(int i=0;i<n;i++){
//           ob[i].accept();
//  }
// cout<<"enter city :";
// cin>>city;
// ob.searchphone(city);


// }



/*Create a C++ class Person with data members Person name, Mobile number, Age, City.
 Write necessary member functions for the following:
i. Search the mobile number of given person.
ii. Search the person name of given mobile number.
iii. Search all person details of given city.
(Use function overloading)
*/
#include<iostream>
using namespace std;
// #include<conio.h>
#include<string.h>
int n,i;
class Person
{
   public:
	  char pname[20], city[20];
           long int mob;
          int age;
          void accept()
          {
             cout<<"Enter Person name mob city age:";
             cin>>pname>>mob>>city>>age;
          }
      void sort()
      {
         for(int pass=1;pass<n;pass++)
         {
           for(i=0;i<n-pass;i++)
           {
              if(ob[i].age>ob[i+1].age)
              {
                 Person t=ob[i];
                     ob[i]=ob[i+1];
                     ob[i+1]=t;                 
              }
           }
         }
         for(i=0;i<n;i++)
          {
             cout<<ob[i].pname<<"\t"<<ob[i].city<<"\t"<<ob[i].age<<endl;
          }
      }

      void disp_city(char city[20])
      {
	 for(i=0;i<n;i++)
	 {
	     if(strcmp(ob[i].city,city)==0)
	     {
		cout<<"\n Name="<<ob[i].pname;
		cout<<"\n Mobile="<<ob[i].mob;
		cout<<"\n Name="<<ob[i].age;
	     }
	 }
      }

}ob[100],obj;
int main()
{
  long int mob,ch;
  char city[20],pname[20];
   cout<<"Enter limit:";
   cin>>n;
   for(i=0;i<n;i++)
   {
      ob[i].accept();
   }

    obj.sort();

	    cout<<"Enter city";
		      cin>>city;
		     obj.disp_city(city);




//  getch(); 
}
// Q. 1)
// a) Create a C++ class MyMatrix. Write a C++ program to accept and display a Matrix. Overload binary '-’
// operator to calculate subtraction of two matrices. [Marks 15]
#include<iostream>
using namespace std;
class MYmatrix{
           public:
           int a[10][10],i,j;

           void accept(){
            cout<<"enter matrix:";
            for(i=0;i<2;i++){
                     for(j=0;j<2;j++){
                      cin>>a[i][j];
                     }
            }
           }

           void operator +(MYmatrix &ob){
            for(i=0;i<2;i++){
                     for(j=0;j<2;j++){
                        a[i][j]=a[i][j]+ob.a[i][j];
                     }
            }

           }
           void disp(){
                        for(i=0;i<2;i++){
                     for(j=0;j<2;j++){
                      cout<<a[i][j];
                     }
                     cout<<"\n";
            }
           }






};
int main(){
MYmatrix ob,ob1;
ob.accept();
ob1.accept();
ob+ob1;
ob.disp();

}
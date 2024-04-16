// b) Create a C++ class MyArray with data members
// - int *arr
// - int size
// Write necessary member functions to accept and display Array elements. Overload the following
// operators:
// Operator Example Purpose
// - (Unary) -Al Reverse array elements.
// +(Binary) A2=Al+n Add constant n to all array elements. [Marks 25]
#include<iostream>
using namespace std;
class Mymatrix{
             public:
             int *arr,n,a;

             void accept(){
                cout<<"etner limit:";
                cin>>n;
                arr= new int[n];
                for(int i=0;i<n;i++){
                     cin>>arr[i];
                }
                cout<<"enter no to add :";
                cin>>a;
             }
             void operator +(){
                   for(int i=0;i<n;i++){
                         arr[i]=arr[i]+a;
                         cout<<arr[i]<<"\t";
                   }
             }

         void operator -(){
            cout<<"\n";
            for(int i=n-1;i>=0;i--){
                         cout<<arr[i]<<"\t";
                   }
         }


};

int main(){
Mymatrix ob;
ob.accept();
+ob;
-ob;
}
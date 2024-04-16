
// Q. 1)
// a) Write a C++ program to read array of ‘n’ integers from user and display it in reverse order.
// (Use Dynamic memory allocation) [Marks 15]

#include<iostream>
using namespace std;
class rev{
public:
int *a,i,n;
void accept(){
    cout<<"enter limit for no :";
    cin>>n;

            a=new int[n];
            for(i=0;i<n;i++){
                  cin>>a[i];
            }
            for(i=n-1;i>=0;i--)
             cout<<a[i]<<"\t";  
}


};
int main(){

rev ob;
ob.accept();


}
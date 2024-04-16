#include<iostream>
using namespace std;
// #include<iostream.h>
// #include<conio.h>
//#include<malloc.h>
class Myarray{
 public: int * a,n,i,s=0;
	    //int s=0;

 Myarray(int n){
  this->n=n;
  a=new int[n];
  cout<<"enter n numbers";



  for(i=0;i<n;i++){
  cin>>a[i];
     }


  for(int j=0;j<n;j++){
  s=s+a[j];
}
  cout<<"total="<<s;
delete a;
 }


};
int main(){
// clrscr();
 Myarray ob(4);
  // getch();


}




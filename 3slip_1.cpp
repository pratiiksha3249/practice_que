#include<iostream>
using namespace std;
void swap(int &a,int &b){
        int t=a;
        a=b;
        b=t;
        cout<<"value of a is :"<<a<<endl<<"value of b is :"<<b;
}
int main(){
int a=10,b=20;
swap(a,b);
  return 0;
}
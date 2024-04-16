// Q. 1)
// a) Write a C++ program to find average of 3 integer numbers and 
//average of 3 float numbers.
// (Use function overloading) [Marks 15]
#include<iostream>
using namespace std;
class demo{
    public:

void avg(int a,int b,int c){
cout<<"int avg :"<<a+b+c/3;
}
void avg(float a, float b,float c){
cout<<"\n float avg :"<<a+b+c/3;

}
};
int main(){
demo ob;
ob.avg(10,20,30);
ob.avg(11.2f,33.4f,55.1f);

}
#include<iostream>
using namespace std; 

void cy(float r,float h){
float c=3.14*r*r*h;
cout<<"volume of cylinder is :"<<c;
}

void cone(int r,float h){
float c1=3.14*r*r*h/3;
cout<<"\n volume of cone is :"<<c1;
}

void sphere(float r){
float s=4/3*3.14*r*r*r;
cout<<"\nvolume of sphere is :"<<s;
}

int main(){
cy(4.5f,7.8f);
cone(1,1.2f);
sphere(6.6f);
}
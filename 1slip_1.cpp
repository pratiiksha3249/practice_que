#include<iostream>
using namespace std;
int max(int a,int b){
return a>b?a:b;
}
int min(int a,int b){
return a<b?a:b;
}

int main(){
int a=10,b=20;
cout<<"max value is"<<max(a,b);
cout<<"\n min value is"<<min(a,b);


return 0;
}

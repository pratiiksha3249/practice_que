// Q. 1)
// a) Write a C++ program using class with data 
//member char str[50] and function replace (char chl, char
// ch2) every occurrence of ch1 in str should be replaced
// with ch2 and return number of replacement it
// makes use default value for char ch2. (Use ch2 as Default Argument)
#include<iostream>
using namespace std;
#include<string.h>

class Str{
public:
char  s1[20],ch;
int c=0;
int replace(char ch='A'){
        cout<<"enter string :"<<endl;
        cin>>s1;
        for(int i=0;s1[i]!='\0';i++){
             if(s1[i]=='a'){
                s1[i]=ch;
                c++;
             }
        }
        return c;
}
       
};
int main(){
    Str ob;
   int c= ob.replace();
   cout<<"total replce is:"<<c;
}
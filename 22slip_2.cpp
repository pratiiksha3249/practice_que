// b) Write a C++ program to overload ‘display_str’ function as follows:
// i. void display_str(char *) -Display a string in double quotes.
// ii. void display_str (int n, char *)- Display first n characters from a given string.
// iii. void display_str (int m, int n,char *)- Display substring
// of a given string from position m to n.
// [Marks 25]
#include<iostream>
#include<string.h>
using namespace std;
class str_op{
public: string s;
void accept(){
cout<<"enter string :";
cin>>s;

}

void disp_str(){
cout<<"\"";
cout<<s;
cout<<"\"";
}

void disp_str(int n){
for(int i=0;i<n;i++){
        cout<<s[i];
    
}
}

void disp_str(int m,int n){
for(int i=m;i<=n;i++){
   cout<<s[i];
}
}
};

int main(){
str_op ob;
ob.accept();
ob.disp_str();
ob.disp_str(3);
cout<<endl;
ob.disp_str(1,4);
}
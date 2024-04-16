// b) Write a C++ program to read the contents of a “SampleData.txt” file. Create “Upper.txt” file 
//to store
// uppercase characters, “Lower.txt” file to store lowercase characters, “Digit.txt” file 
//to store digits and
// “Other.txt” file to store remaining characters of a given file. [Marks 25]
#include<iostream>
using namespace std;
#include<stdlib.h>
#include<fstream>
#include<ctype.h>
int main(){
ifstream f1;
ofstream f2,f3,f4,f5;
char ch;

f1.open("4slip_2.cpp");
f2.open("u.txt",ios::out);
f3.open("l.txt",ios::out);
f4.open("d.txt",ios::out);
f5.open("o.txt",ios::out);
if(!f1.good()){
    cout<<"file not found.......";
    exit(0);
}
while(!f1.eof()){
    f1.get(ch);
    if(isupper(ch)){
        f2.put(ch);
    }
    else if(islower(ch)){
          f3.put(ch);
    }
    else if(isdigit(ch))
    f4.put(ch);
    else
    f5.put(ch);

}
cout<<"file coped succufully...........................................";

f1.close();
f2.close();
f3.close();
f4.close();
f5.close();
}


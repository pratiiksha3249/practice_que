// Q. 1)
// a) Write C++ program to create two classes Integer Array and Float 
//Array with an array as a data
// member. Write necessary member functions to accept and display array
// elements of both the classes.
// Find and display average of both the array. (Use Friend function) [Marks 15]
#include<iostream>
using namespace std;
class intarr{
    private:
    friend void int_avg(intarr &ob);
    public:int a[5],i,sum=0;
    void accept(){
        
        cout<<"enter 5 elements :";
        for(i=0;i<5;i++)
        cin>>a[i];

    }
    void int_arr(intarr &ob){
        for(i=0;i<5;i++)
        sum=sum+ob.a[i];
        cout<<"avg of int array :"<<sum/5;

    }
    
};

class floatarr{
private:
friend void float_arr(floatarr &ob);
public:float a[5];
void accept(){
int i;

cout<<"enter float 5 no:";
for(i=0;i<5;i++)
cin>>a[i];
// for(i=0;i<5;i++)
// sum=sum+ob.a[i];
}

void float_arr(floatarr &ob){
    
        float sum=0;
        for(int i=0;i<5;i++)
        sum=sum+ob.a[i];
        cout<<"\n avg of int array :"<<sum/5;

    }
};
int main(){
intarr ob;
ob.accept();
ob.int_arr(ob);


floatarr ob1;
ob1.accept();
ob1.float_arr(ob1);
}

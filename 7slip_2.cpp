// b) Create a C++ class Vector with data members size & pointer to integer.
// The size of the vector varies so
// the memory should be allocated dynamically.
// Perform following operations:
// i. Accept a vector
// ii. Display a vector in the format (10, 20, 30,....)
// iii. | Calculate union of two vectors.
// (use parameterized constructor & copy constructor) [Marks 25]
#include <iostream>
using namespace std;
#include <math.h>

class vector
{
public:
    int *a, n, n1,f=0,b[10];
    vector(int n)
    {
        // this->*a=*a;
        this->n = n;
        a = new int[n];
        cout<<"enter first vector no:";

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    cout<<"enter secoud vector no:";
        
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

    }
    void disp()
    {   cout<<"(";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << ",";
        }
               cout<<")";

    }


    void union_no()
    {
        int f;
        cout<<"(";
        for(int i=0;i<n;i++){
               cout<<a[i]<<"\t";
        }

       for(int j=0;j<n;j++){
        f=0;
            for(int i=0;i<n;i++){
                if(a[i]==b[j]){
                      f=1;
                      break;
                }

            }
            if(f!=1){
                cout<<b[j]<<" ";
            }
       }                               
   cout<<")";
                


    }
};

int main()
{
    int n;
    cout << "enter limit :";
    cin >> n;
    vector ob(n);
    ob.disp();
    cout<<endl;
    ob.union_no();
}
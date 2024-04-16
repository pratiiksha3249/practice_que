// b) Create a C++ class
// class Matrix
// {
// int **p;
// int r, Cc;
// public:
// //member functions
// }s
// Write necessary member functions to:
// i. Accept Matrix elements
// ii. Display Matrix elements.
// ili. Calculate transpose of a Matrix.
// (Use constructor and destructor) [Marks 25]
#include <iostream>
using namespace std;
class matrix
{
public:
    int j, n, m, a[10][10];
             void accept(int n,int m){

     for (int i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
    }




    void disp()
    {

        for (int i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << a[i][j];
            }
        }
    }
};
int main()
{
    matrix ob;
    ob.accept(2,2);
    ob.disp();
}
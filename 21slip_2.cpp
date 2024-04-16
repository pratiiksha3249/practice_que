// b) Create a C++ class for a two dimensional points. Write necessary member functions to accept & display
// the point object. Overload the following operators:
// Operator Example Purpose
// + (Binary) P3=P1+P2 Adds coordinates of point p1 and p2.
// - (Unary) -Pl Negates coordinates of point pl.
// *(Binary) P2=P1*n Multiply coordinates of point pl by constant ‘n’. [Marks 25]
#include <iostream>
using namespace std;
#include <math.h>
class co
{
public:
    int x, y;
    // logn int d;
    void accept()
    {
        cout << "enter x and y value :";
        cin >> x >> y;
    }
    friend void operator-(co &ob, co &ob2);
};

void operator-(co &ob, co &ob2)
{
 long int  d=sqrt (((ob2.x - ob.x) * (ob2.x - ob.x)) + ((ob2.y - ob.y) * (ob2.y - ob.y)));
    cout <<"co-ordinate distance :"<< d;
}

int main()
{
    co ob, ob2;
    ob.accept();
    ob2.accept();
    ob-ob2;
}

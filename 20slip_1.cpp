// Q. 1)
// a) Create a C++ class Number with integer data member. Write necessary member functions to overload
// the operator unary pre and post increment ‘++’. [Marks 15]
#include <iostream>
using namespace std;
class Number
{
public:
        int a;

        void accept()
        {

                cout << "enter no";
                cin >> a;
        }

        void operator++()
        {
                a++;
        }
        
        void disp()
        {
                cout << "no is :" << a;
        }
};
int main()
{
	Number ob;
		// clrscr();
        ob.accept();

        ++ob;
        ob.disp();
       ob++;
        ob.disp();
		// getch();
}

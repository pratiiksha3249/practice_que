// b) Create a base class Travels with data members T_no, Company_Name.
// Derive a class Route with data
// members Route id, Source, and Destination from Travels class.
// Also derive a class Reservation with
// data members Number_of_ Seats, Travels Class, Fare, and Travel Date from Route.
// Write a C++ program to perform following necessary member functions:
// i. Accept details of ‘n’ reservations.
// ii. Display details of all reservations.
// ili. Display reservation details of a specified Date. [Marks 25]
#include <iostream>
using namespace std;
#include <string>
class travels
{
public:
    int tno;
    char cname;
    void accept()
    {
        cout << "enter tno cname:";
        cin >> tno >> cname;
    }

    void disp()
    {
        cout << "tno cname"
             << "\t" << tno << "\t" << cname << endl;
    }
    
};
class route : public travels
{
public:
    int id;
    // char rout[20], source[20];
    string rout1;
    string source;
    void acceptrt()
    {
        cout << "enter rout and source:";
        cin >> rout1;
        cin>> source;
    }
    void disprt()
    {
        cout << "rout and source ";
        cout << rout1 << source;
    }
};

class reservation : public travels
{
public:
    int date1;
    int traval_class;

    void acceptr()
    {
        cout << "enter date and traval_class:";
        cin >> date1 >> traval_class;
    }
    void dispr()
    {
        cout << "date and traval_class :";
        cout << date1 << traval_class;
    }
};
int main()
{
    int ch, i, n;
    int newdate;
    cout << "enter limit for rec :";
    cin >> n;
    route ob[n];
    reservation ob1[n];
    do
    {
        cout << " 1- enter n rec 2- display n rec 3- disp rec for specific date :";
        cin >> ch;
        switch (ch)
        {
        case 1:
            for (i = 0; i < n; i++)
            {
                ob[i].accept();
                cout << "\n";
                ob[i].acceptrt();
                cout << "\n";
                ob1[i].acceptr();
            }

            break;
        case 2:
            for (i = 0; i < n; i++){
                ob[i].disp();

            cout << "\n";
            ob[i].disprt();
            cout << "\n";
            ob1[i].dispr();
        }

            // for( i=0;i<n;i++)
            // ob1[i].dispr();

            break;
        case 3:
            cout << "enter date to disp rec :";
            cin >> newdate;
            for (i = 0; i < n; i++)
            {
                if (ob1[i].date1 == newdate){
                    ob1[i].dispr();
                }
                
            }
        }
        break;

    } while (ch < 4);
}
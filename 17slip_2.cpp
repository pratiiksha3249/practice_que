// b) Design two base classes Student (S_id, Name, Class)
// and Competition (C_id, C_Name). Derive a class
// Stud_Comp(Rank) from it. Write a menu driven program to perform
// following functions:
// i. Accept information.
// ii. Display information.
// iii. Display Student Details in the ascending order of Rank of a
// specified competition.
// (Use array of objects) [Marks 25]
#include <iostream>
using namespace std;

class student
{
public:
    int sid, s_class;
    char name[20];
    void accepts()
    {
        cout << "enter sid sclass name :" << endl;
        cin >> sid >> s_class >> name;
    }
    void disps(){
        cout << " sid sclass name :" <<"\t"<<sid<<"\t"<<s_class<<"\t"<<name<< endl;
    }
};
class comp
{
public:
    int cid;
    char cname[20];
    void acceptc()
    {
        cout << "enter cid cname :" << endl;
        cin >> cid >> cname;
    }
    void dispc(){
                cout << "enter cid cname :"<<cid<<"\t"<<cname<< endl;

    }
};
class stud_com : public student, public comp
{
public:
    int rank;
    void acceptr()
    {
        cout << "enter rank:" << endl;
        cin >> rank;
    }
    void dispr(){
        cout<<"rank :"<<rank;
    }
};

int main()
{
    //stud_com ob;
    int ch, i, n;
    cout << "enter limit for accept rec :";
            cin >> n;
            stud_com ob[n];
    do
    {
        cout << "enter choice  1-accept records 2-display 3-display acce with specific condition :" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            
            for (i = 0; i < n; i++)
            {
                ob[i].accepts();
                ob[i].acceptc();
                ob[i].acceptr();
            }

            break;

        case 2:
        for (i = 0; i < n; i++)
            {
                ob[i].disps();
                ob[i].dispc();
                ob[i].dispr();
            }
               
            break;

      
        case 3:
                    for(int pass=1;pass<n;pass++){
                          for(i=0;i<n-pass;i++){
                            if(ob[i].rank>ob[i+1].rank){
                                stud_com t= ob[i];
                                ob[i]=ob[i+1];
                                ob[i+1]=t;


                            }

                          }
                    }
                    for(i=0;i<n;i++)
                    ob[i].disps();

            break;
        }

    } while (ch!=4);

}
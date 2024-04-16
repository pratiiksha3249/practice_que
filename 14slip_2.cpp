// b) Create a C++ class MyString with data members a character pointer and
// str length. (Use new and
// delete operator). Write a C++ program using operator overloading to
// perform following operation:
// i. ! To reverse the case of each alphabet from a given string.
// ii, < To compare length of two strings.
// iii, + To add constant ‘n’ to each alphabet ofa string. [Marks 25]
#include <iostream>
using namespace std;
#include <string.h>
class Mstring
{
public:
  char *str;
  // *str1;
  void accept()
  {
    str = new char[20];
    //  str1=new char[20];
    cout << "\n enter two string :\n";
    cin >> str;
    //  cout<<"\n enter two string :\n";
    //  cin>>str1;
  }
  void disp()
  {
    cout << "string is :\n " << str;
  }
  void operator!()
  {
    for (int i = 0; str[i] != '\0'; i++)
    {
      if (islower(str[i]))
      {
        str[i] = toupper(str[i]);
      }
      else
      {
        str[i] = tolower(str[i]);
      }
    }
  }
  void operator<(Mstring &ob)
  {
    if (strcmp(str, ob.str) < 0)
    {
      cout << "\n fist sting is small:";
    }
    else
    {
      // cout<<str<<str1;
      cout << "\n secout string is small :";
    }
  }
  void operator+(Mstring &ob)
  {
    strcat(str, ob.str);
    cout << "\nconcatet string is :" << str;
  }
};

int main()
{
  Mstring ob, ob1;
  ob.accept();
  !ob;
  ob.disp();
  cout << endl<< "check for greater or not :" << endl;
  ob.accept();
  ob1.accept();
  ob < ob1;
  ob + ob1;
}

// #include <iostream>
// #include <cstring>
// using namespace std;

// class Mstring {
// public:
//     char *str;

//     Mstring() {
//         str = nullptr;
//     }

//     void accept() {
//         str = new char[20];
//         cout << "Enter a string: ";
//         cin >> str;
//     }

//     void operator!() {
//         for (int i = 0; str[i] != '\0'; i++) {
//             if (islower(str[i])) {
//                 str[i] = toupper(str[i]);
//             } else if (isupper(str[i])) {
//                 str[i] = tolower(str[i]);
//             }
//         }
//     }

//     bool operator<(const Mstring& other) {
//         return strlen(str) < strlen(other.str);
//     }

//     Mstring operator+(int n) {
//         Mstring result;
//         result.str = new char[strlen(str) + 1];
//         strcpy(result.str, str);
//         for (int i = 0; result.str[i] != '\0'; i++) {
//             result.str[i] += n;
//         }
//         return result;
//     }

//     void display() {
//         cout << "Modified string: " << str << endl;
//     }
// };

// int main() {
//     Mstring ob1, ob2;
//     ob1.accept();
//     !ob1;
//     ob1.display();

//     ob2.accept();
//     if (ob1 < ob2) {
//         cout << "String 1 is shorter than String 2" << endl;
//     } else {
//         cout << "String 1 is longer than or equal to String 2" << endl;
//     }

//     Mstring ob3 = ob1 + 1;
//     ob3.display();

//     return 0;
// }
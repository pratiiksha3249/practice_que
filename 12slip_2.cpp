// b) Create a C++ class Weight with data members kilogram, gram. 
//Write a C++ program using operator
// overloading to perform following functions:
// i. To accept weight.
// ii. To display weight in kilogram and gram format.
// iii. Overload += operator to add two weights.
// iv. Overload == operator to check equality of two weights. [Marks 25]
#include<iostream>
using namespace std;
class weight{
public: int w,a;
          void accept(){
            cout<<"\netner weight :\n ";
            cin>>w;
          }
          void conv(){
            cout<<"\nweight killogram to gram :\n "<<w*1000;
          }
          friend int operator +=(weight &ob,weight &ob1);
            friend int operator ==(weight &ob,weight &ob1);



};
int  operator +=(weight &ob , weight &ob1){
// int c= ob.w+=ob1.w;
int c= ob.w+=ob1.w;
return c;

}

int operator ==(weight &ob,weight &ob1){
if(ob.w==ob1.w){
  cout<<"\ntwo weight is same:\n";
}
else{
    cout<<"\ntwo weight is not same:\n";

}


}


int main(){
weight ob,ob1;
ob.accept();
ob.conv();
ob1.accept();
ob.conv();
cout<<"\n add two weight \n :";
// cout<<"addition of two w :"<<ob+=ob1;
int k=ob+=ob1;
cout<<k;
ob==ob1;
// cout<<ob.disp();
}





// #include <iostream>
// using namespace std;

// class Weight {
// public:
//     float kilogram, gram;

//     void accept() {
//         cout << "Enter weight in kilograms: ";
//         cin >> kilogram;
//         cout << "Enter weight in grams: ";
//         cin >> gram;
//     }

//     void display() {
//         cout << "Weight: " << kilogram << " kilograms and " << gram << " grams" << endl;
//     }

//     Weight& operator+=(const Weight& other) {
//         kilogram += other.kilogram;
//         gram += other.gram;
//         if (gram >= 1000) {
//             kilogram += gram / 1000;
//             gram %= 1000;
//         }
//         return *this;
//     }

//     bool operator==(const Weight& other) const {
//         return (kilogram == other.kilogram) && (gram == other.gram);
//     }
// };

// int main() {
//     Weight w1, w2;
//     w1.accept();
//     w2.accept();

//     cout << "First weight: ";
//     w1.display();
//     cout << "Second weight: ";
//     w2.display();

//     cout << "Adding weights..." << endl;
//     w1 += w2;

//     cout << "Total weight: ";
//     w1.display();

//     if (w1 == w2) {
//         cout << "Weights are equal." << endl;
//     } else {
//         cout << "Weights are not equal." << endl;
//     }

//     return 0;
// }

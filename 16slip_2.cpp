// b) Create a C++ class MyMatrix and Write necessary member functions for the following:
// i. To accept a Matrix
// ii. To display a Matrix
// iii. Overload unary ‘-‘ operator to calculate transpose of a Matrix.
// iv. Overload unary '++’ operator to increment matrix elements by 1. [Marks 25]
#include<istream>
#include<stdio.h>
using namespace std;
class MYmatrix{
                   public:
                   int a[10][10],i,j;
                   

void accept(){
    // cout<<"etner matrix :";
    printf("etner matrix :");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            // cin>>a[i][j];
            scanf("%d",&a[i][j]);

        }

    }
}

void disp(){
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            // cout<<a[i][j]<<"\t";
            printf("%d",a[i][j]);

        }
        printf("\n");

    }
}
void operator --(){
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            --a[i][j];
            // cout<<a[i][j]<<"\t";
                        printf("%d",a[i][j]);


        }
        // cout<<endl;
        printf("\n");

    }
}
void operator ++(){
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            ++a[i][j];
            // cout<<a[i][j]<<"\t";
                        printf("%d",a[i][j]);


        }
        // cout<<endl;
        printf("\n");

    }
}
};

int main(){
MYmatrix ob,ob1;
ob.accept();
ob.disp();
printf("\n - operation :");
--ob;
printf("\n ++ operation :");

++ob;
   return 0;
}
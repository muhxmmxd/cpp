#include<iostream>
using namespace std;
int main()
{
    int A[3][3]={{1,19,2},{9,5,0},{41,33,3}};
   
    cout<<A+2<<endl;//address of A[2][0]
    cout<<*(A+2)<<endl;//address of A[2][0]
    cout<<*A+2<<endl;//address of A[0][2]
    cout<<*(A+2)+2<<endl; //address of A[4][0]
    cout<<*(*A+2)+2<<endl;//adress of A[2][2]
    //cout<<*(*A+2)+2<<endl;//


    




    return 0;
}
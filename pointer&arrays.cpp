#include <iostream>
using namespace std;
int main()
{
    int A[800]={1,3,2,4,2};
    int *pA=A;
    cout<<A+799<<endl;
    


    for(int i=0; i<=sizeof(A); i++){
    cout<< (A + i) <<endl; //address of A[i]
    cout<< A[i] <<endl;//value of A[i]
    cout<< &A[i] <<endl;//address of A[i]
    cout<< *(A+i) <<endl;//value of A[i]
    cout<<endl;
    cout<<endl;
    cout<<endl;
}


    




    return 0;
}


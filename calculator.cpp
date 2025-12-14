#include<iostream>
using namespace std;
int main(){
    bool rep=true;
    do {
    int n1, n2;
    cout<<"Enter num1:"<<endl;
    
    cin >> n1;
    cout<<"Enter num2:"<<endl;
    cin >> n2;

    cout<<"Select operation:"<<endl;
    cout << "1 for Addition | 2 for Subtraction | 3 for Multiplicatiom | 4 for Division" << endl;
    int operation;
    cin>>operation;
    
    if (operation==1) cout <<"The addition of the numbers is "<< n1+n2<< endl;
    else if(operation==2) cout <<"The subtraction of number 2 from number 1 is "<< n1-n2<< endl;
    else if(operation==3) cout <<"The multiplication of the numbers is "<< n1*n2<< endl;
    else if(operation==4) cout <<"The division of the number 1 by number 2 is "<< n1/n2<< endl;
    else {cout<< "Invalid input"; continue;}
    
    bool a=true;

    cout <<"Do you want to calculate another expression? Y or N"<<endl;
    char q;

    cin>>q;
    if (q=='n'){ rep = false;}

    



}while(rep);


    return 0;

}


/*
Simple calculator program that performs basic arithmetic operations 
(addition, subtraction, multiplication, division) based on user input.
It repeatedly prompts the user to enter two numbers and select an operation 
until the user decides to exit.

Author: Muhammad Patel

Date: December 14, 2025
*/

#include<iostream>

using namespace std;
int main()
{
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
        else if(operation==4)
        {
            if(n2==0) {

            cout<<"Error: Division by zero is undefined. "<<endl<<"Re-enter the numbers for calculation."; continue; 
            }
            else
            
            cout <<"The division of the number 1 by number 2 is "<< n1/n2<< endl;
        }
        else {cout<< "Invalid input"<<endl;}

        cout <<"Do you want to calculate another expression? Y or N"<<endl;
        char q;
        cin>>q;
        if (q=='n') break;
        if (q=='N') break;
        if (q=='y') continue;
        if (q=='Y') continue;
        else cout<<"Invalid input. Enter Y or N"<< endl;

        bool a=true;
        while(a)
        {      
            cout<<"Do you want to calculate another expression? Y or N"<< endl;
            cin >> q;
            if (q=='n') {rep=false; a=false;}
            if (q=='N') {rep=false; a=false;}
            if (q=='y') {rep=true; a=false;}
            if (q=='Y') {rep=true; a=false;}
            cout<<"Invalid input. Enter Y or N"<< endl;
        }

    }while(rep);


    return 0;

}




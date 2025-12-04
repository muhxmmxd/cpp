#include <iostream>
using namespace std;
int main()
{   
  //basic string output
    string name="Muhammad";
    int age=18;
    cout << "There's a guy named " << name <<".\n";
    cout << "He's " << age << " years old"<<".\n";
    cout << "He likes the name " << name <<"\n";
    cout <<"But he doesn't like being "<<age<<".\n";


//string operations
    char a='A';
    cout << "The character is: " << a << endl;
    string str1="Git is a version control system.";
    cout<< str1<<endl; // prints str1
    str1[3]='T'; // modifies character at index 3
    cout<< str1.find("system",0)<<endl;// prints index of first occurrence of "system". the int is the index at which the search starts
    cout<< str1.length()<<endl;// prints length of str1
    cout<< str1.substr(2,10); // prints from index 2, 10 characters
    string str1substr=str1.substr(2,10);// stores substring in str1substr
    
    cout<<endl<< str1substr;

    
//arithmetic operations

   cout << 3+5 << endl; // prints the sum of 3 and 5
   cout << 3-5 << endl; // prints the difference of 3 and 5
   cout << 3*5 << endl; // prints the product of 3 and 5
   cout << 3/5 << endl; // prints the quotient of 3 divided by 5
   cout << 3%5 << endl; // prints the remainder of 3 divided by 5
    int num1=10;
    num1++; // increments num1 by 1
    cout<<num1<<endl;
    num1--; // decrements num1 by 1
    cout<<num1<<endl;
    


}
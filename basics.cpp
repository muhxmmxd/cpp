#include <iostream>
#include <cmath>
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

    //math functions
    cout << pow(2,3) << endl; // prints 2 raised to the power of 3
    cout << sqrt(16) << endl; // prints the square root of 16
    cout << round(4.6) << endl; // prints 4.6 rounded to the nearest integer
    cout << ceil(4.2) << endl; // prints the smallest integer greater than or equal to 4.2
    cout << floor(4.7) << endl; // prints the largest integer less than or equal to 4.7 
    cout<< fmax(3,7)<<endl; // prints the maximum of 3 and 7
    cout<< fmin(3,7)<<endl; // prints the minimum of 3 and 7
    cout << abs(-10) << endl; // prints the absolute value of -10
    cout<< log(2.718281828459045) << endl; // prints the natural logarithm of e
    cout<< sin(3.141592653589793/2) << endl; // prints the sine of pi/2 radians
    cout<< cos(0) << endl; // prints the cosine of 0 radians
    cout<< tan(3.141592653589793/4) << endl; // prints the tangent of pi/4 radians  
    cout<< cbrt(27) << endl; // prints the cube root of 27
    cout<< hypot(3,4) << endl; // prints the hypotenuse of a right triangle with sides 3 and 4
    cout<< exp(1) << endl; // prints e raised to the power of 1


    // taking input from user
    int agee;
    cout<< "Enter your age:"<<endl;
    cin>>agee;
    cout << "You are " <<agee<< " years old.";

    return 0;
}
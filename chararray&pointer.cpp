#include <iostream>
#include <array>
#include <stdlib.h>

using namespace std;
void print( char *C)
{
    C[0] ='m'; //modification is allowed
    cout<<"Size in bytes of passed array is " <<sizeof(C)<<endl; // this gives the size of char pointer C
    // and not the size of the passed array. this is because an array passed as a function argument is passed as a 
    // pointer to the base address of the array
    // consequently, we cannot know the size of the arrow inside this function

    while (*C!='\0') // while (C[i]!='\0') also works
    {
        cout<<*C; //dereferencing
        C++; // C is the base address. incrementing the address.(pointer arithmetic)
            

    }
    cout<<"\n\n";
    

}
void printconst(const char *C)
{
    // c[14] = 'x'; // error: cannot modify a const character
    cout<<"Size in bytes of passed array is " <<sizeof(C)<<endl; 

    while (*C!='\0') 
    {
        cout<<*C; 
        C++; // 
            

    }
    cout<<"\n\n";
    

}
int main()
{
    char cArr[]="apple";
    cout << "size of cArr is "<< sizeof(cArr)/sizeof(cArr[0])<<endl; // length of the array. this will give 6. 
    //because char arrays are implicitly stored with a null character '/0' at the end of the char array (or string)
    print(cArr); 
    printconst(cArr); // we can also pass string literals directly to the function

    return 0;
}
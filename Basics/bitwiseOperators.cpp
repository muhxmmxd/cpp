#include <iostream>
void print(int a)
{
    std::cout << a << std::endl;
}
int main()
{
    //assuming 8 bits value
    int x = 3, y = 5, z; // x=3= 0000 0011 and y=5= 0000 0101
    z = x & y;           // 0000 0001 = 1
    print(z);
    z = x | y; // 0000 0111 = 7 (bits that are 1 in either x or y are set to 1)
    print(z);
    z = ~x; // flips all 32 bits, prints -4 ( two's complement representation)
    print(z);
    z= x<<y; // left shift bits of x by y places //0110 0000 = 96 (3*2^5) which is equivalent to multiplying x by 2^y
    print(z);
    z=x>>y; //right shift bits of x by y places // 0000 0000 = 0 (3/2^5 = 3/32 = 0.09375, truncated to 0)
    print(z);
    z= x^y; //0000 0110 = 6 (bits that are different are set to 1)
    print(z);
    return 0;


    //AND gate is used for checking if a particular bit is set or not
    //OR gate is used for setting a particular bit
    //XOR gate is used for toggling a particular bit
    //NOT gate is used for inverting all bits
    //Left shift is used for multiplying by powers of 2
    //Right shift is used for dividing by powers of 2
    //These operators are commonly used in low-level programming, graphics programming, cryptography, and performance optimization tasks.

}
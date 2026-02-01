#include <iostream>
using namespace std;
void updateage(int *oldAge, int newAge)
{
    *oldAge=newAge;

}
int main()
{
string name="Muhammad";
int age=17;
cout<<age<<endl;
updateage(&age,18);
cout<<age;

}
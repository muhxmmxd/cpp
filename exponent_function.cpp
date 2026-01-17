#include <iostream>

int power(float num, int x)
{
    if (x==0) std::cout<<"1"<<std::endl;return 0;
    float ans=1;
    for(int i=1;i<=x;i++)
    {
        ans=ans*num;
    }
    std::cout<<ans<<std::endl;
    return 0;
}
int main()
{
    power(3,0);
    return 0;



}
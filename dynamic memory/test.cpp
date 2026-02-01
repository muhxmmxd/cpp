#include<iostream>
int *add(int *a,int *b)
{
    int *c=new int;
    *c=*a+*b;
    return c;

}
void print()
{
    std::cout<<"Hello World!";
}
int main()
{   
    //int y=1,z=6;
    //int *x=add(&y,&z);
    //print();
    //std::cout<<"\n"<<*x<<std::endl;
   //// delete x;
   //// x=nullptr;
    //std::cout<<*x;
    int *p= new int[20]{1,2,3,4};
    std::cout<<*(p+50000)<<std::endl;
    //std::cout<<*(p);




    return 0;
}
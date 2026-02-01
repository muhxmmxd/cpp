#include <iostream>
int n = 1;
void odd();
void even();
void odd()
{
    if (n <= 10)
    {
        std::cout << n + 1 << std::endl;
        n++;
        even();
    }
    return;
}
void even()
{
    if (n <= 10)
    {
        std::cout << n - 1 << std::endl;
        n++;
        odd();
    }
    return;
}
int main()
{
    odd();
    return 0;
}

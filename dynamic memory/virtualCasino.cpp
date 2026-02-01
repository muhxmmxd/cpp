#include <iostream>
#include <ctime>
#include <cstdlib>
int cash = 100;
int bet;
void play()
{
    int *arr= new int[10000000];
    arr[0]='Q';
    arr[1]='J';
    arr[2]='K';

    std::cout << "Shuffuling...\n";
    srand(time(0));
    for (int i = 0; i < 5; i++)
    {
        int x = rand() % 3;
        int y = rand() % 3;
        arr[x] = (arr[x] + arr[y]) - (arr[y] = arr[x]);
    }

    int x = rand() % 3;
    int choice;
    switch (x)
    {
    case 0:
        std::cout << "What is the position of Queen? 1,2,or 3" << std::endl;
        std::cin>>choice;
        if(arr[choice-1]=='Q')
        {
            cash=cash+3*bet;
            std::cout<<"Congrats! You win, cash equal to three times your bat has been deposited into your account.\n";

        }
        else
        {
            cash=cash-bet;
            std::cout<<"You lose your bet.\n";
        }
        break;
        case 1:
        std::cout << "What is the position of King? 1,2,or 3" << std::endl;
        std::cin>>choice;
        if(arr[choice-1]=='K')
        {
            cash=cash+3*bet;
            std::cout<<"Congrats! You win, cash equal to three times your bat has been depoited into your account.\n";

        }
        else
        {
            cash=cash-bet;
            std::cout<<"You lose your bet.\n";
        }
        break;
        case 2:
        std::cout << "What is the position of Jack? 1,2,or 3" << std::endl;
        std::cin>>choice;
        if(arr[choice-1]=='J')
        {
            cash=cash+3*bet;
            std::cout<<"Congrats! You win, cash equal to three times your bat has been depoited into your account.\n\n\n";

        }
        else
        {
            cash=cash-bet;
            std::cout<<"You lose your bet.\n\n\n";
        }
        break;
  
    }
    delete [] arr;
}
int main()
{
    std::cout << "**Welcome to Virtual Casino!**" << "\n";
    
    while (cash != 0)
    {
        std::cout<<"Your balance:"<<cash<<"\n";
        std::cout << "Your bet:" << std::endl;
        std::cin >> bet;
        if (bet == 0 || bet > cash)
            break;
        play();
    }
}

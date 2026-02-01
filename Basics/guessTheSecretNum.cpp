#include <iostream>
int main(){

    int guess;
    int secretnum=7;
    int guessLimit=5;
    int guessCount=0;

    
    while(guessCount<guessLimit)
    {
    std::cout <<("Guess the secret number:");
    std::cin>>guess;
    guessCount++;
    if(guess==secretnum) break;
    std::cout<<"Wrong guess. Attempts left: " << guessLimit-guessCount <<"\n"<<std::endl;
    }
    if(guess==secretnum)
    {
        std::cout<<"You guessed it right!! You win." <<std::endl;
    }
    else{
        std::cout<<"You could not guess the secret num within the guessing limit. You lose."<<std::endl;
    }
    return 0;

}
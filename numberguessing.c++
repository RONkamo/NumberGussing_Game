#include<iostream>

int main(){
   
    int tries;
    int num;
    int guess;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout<<"*******NUMBER GUESSING GAME*********\n";

    do{
        std::cout<<"Enter guess number between (1-100) : ";
        std::cin>> guess;
        tries++;

        if (guess > num){
            std::cout<<"'HAHA.... IS TOO HIGH'\n";
        }
        else if (guess < num){
            std::cout<<"'NAH UH..... IS TOO LOW'\n";
        }
        else{
            std::cout<<"YAY Correct!!!!!!! YOUR NUMBER OF TRIES :"<<tries<<'\n';
        }    
         
    }while(guess != num);

    if (tries > 10){
                std::cout<<"YOUR SO NOOB\n";
        }


    std::cout<<"******************************************************";

    return 0;
}
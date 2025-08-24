
 #include<stdio.h>
#include <stdlib.h>   
#include <time.h>  

int main()
{
    srand(time(0));
  int randomNumber= (rand ()%100)+1;
  int guessed;
  int numberOfGuesses=0;

  do{
  printf("Guess the number between 1 to 100\n");
  scanf("%d",&guessed);
    if(guessed==randomNumber){
        printf("You guessed it right\n");
    }
    else if(guessed>randomNumber){
        printf("Try a smaller number\n");
    }
    else{
        printf("Try a larger number\n");
    }
  numberOfGuesses++;
  }
  while(guessed!= randomNumber);

    printf("You guessed it in %d guesses\n",numberOfGuesses);
  

    return 0;
}
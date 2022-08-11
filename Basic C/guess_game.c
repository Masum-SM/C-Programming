#include<stdio.h>
#include<stdlib.h>
int main(){
    int number_of_guesses = 1;
    srand(time(0));
    int hidden = rand()%100+1;
    printf("%d\n",hidden);

    while(number_of_guesses <10){
        int guess;
        scanf("%d",&guess);
        if(guess == hidden){
            printf("You are win!!!");
            break;
        }
        else if (guess<hidden){
            printf("Guess a larger number\n");
        }
        else {
            printf("Guess a smaller number\n");
        }
        number_of_guesses++;
    }
    if(number_of_guesses == 10){
        printf("You Failed!!!");
    }


}

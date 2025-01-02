#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){
    int random,guess;
    int numof_guess=0;
    srand(time(NULL));

    printf("! WELCOME !\n");
    printf("This is a number guessing game\n");
    random = rand () % 100 +1;
    

    do{
        printf("\nEnter Any Number Between 1 to 100: ");
        scanf("%d",&guess);
        numof_guess++;

        if(guess < random ){
            printf("Guess a larger number: "); 
        }
        else if (guess > random){ 
            printf("Guess a smaller number: ");
        }
        else{
            printf("Congratulations! You have guessed the number\n");
            
            
        }

    } while (guess != random);
    printf("\n");
        printf("\t !! Thanks For Playing !!\n");
        printf("\n");
        printf("Number generated is %d & Number Guessed is %d\n",random,guess);
        printf("You have guessed the number in %d attempts\n",numof_guess);
        printf("\n");
        printf("Developed By: Aryan Lade");

}
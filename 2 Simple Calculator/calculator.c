#include<stdio.h>
#include<math.h>

void print_menu(){
    printf("\n");
    printf("------------------------------------------------------\n");
    printf("\n \t!! Welcome To Simple Calculator !!\n");
    printf("\nChoose Any Operation From the Following: \n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Exit\n");
    printf("\nYour Choice: ");
}
int main (){
    int choice;
    float num1,num2,result;
    while(1){
        print_menu();
        scanf("%d",&choice);
        if(choice == 7){
            printf("\n \t !! Thanks For Using Our Calculator !!\n");
            printf("\nDeveloped By: Aryan Lade\n");
            break;
        }
        if(choice<1 || choice>7){
            printf("Invalid Choice\nPlease Choose a Valid Option Again\n");
            continue;
        }
        printf("Enter first Number: ");
        scanf("%f",&num1);
        printf("Enter second Number: ");
        scanf("%f",&num2);
        switch(choice){
            case 1://Addition
            result=num1+num2;            
            break;
            case 2://Subtraction
            result=num1-num2;            
            break;
            case 3://Multiplication
            result=num1*num2;            
            break;
            case 4://Division
            if(num2==0){
                printf("Division by Zero is not possible\n");
                break;
            }
            result=num1/num2;            
            break;
            case 5://Modulus
            if((int)num2==0){
                printf("Modulus by Zero is not possible\n");
                break;
            }
            result=(int)num1 % (int)num2;            
            break;
            case 6://Power 
            result=pow(num1,num2);                       
            break;            
        }

        printf("Result of the operation is: %.2f\n",result);
    }
    printf("\nCreated by: Aryan Lade");
    return 0;
}
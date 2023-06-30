#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char cnf[2];
    int todo;
    float num1;
    float num2;    
    printf("Hello, User!\nDo you want to use this calculator?(Y/N) ");
    scanf("%s", &cnf);
    if (strcmp(cnf, "y") == 0)
    {
        printf("What do you want to do?\n");
        printf("if you want to add enter 1\n");
        printf("if you want to subtract enter 2\n");
        printf("if you want to multiply enter 3\n");
        printf("if you want to divide enter 4\n");
        printf("For all four operation enter 5\n");
        printf("Enter: ");
        scanf("%d", &todo);
        printf("Enter your 1st number: ");
        scanf("%f", &num1);
        printf("Enter your 2nd number: ");
        scanf("%f", &num2);
        if (todo == 1)
        {
            printf("Result: %f", num1 + num2);
        }
        if (todo == 2)
        {
            printf("Result: %f", num1 - num2);
        }
        if (todo == 3)
        {
            printf("Result: %f", num1 * num2);
        }
        if (todo == 4)
        {
            printf("Result: %f", num1 / num2);
        }
        if (todo == 5)
        {
            printf("Addition: %f\n", num1 + num2);
            printf("Subtraction: %f\n", num1 - num2);
            printf("Multiplication: %f\n", num1 * num2);
            printf("Division: %f\n", num1 / num2);
        }
    }
    else
    {
        printf("Exiting....");
    }
    
    
    return 0;
}

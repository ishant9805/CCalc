#include <stdio.h>

int main(int argc, char const *argv[])
{
    char* cnf;
    int todo;
    printf("Hello, User!\nDo you want to use this calculator?(Y/N) ");
    scanf('%c', &cnf);
    if (*cnf == 'y' || *cnf == 'Y')
    {
        printf("What do you want to do?\n");
        printf("if you want to add enter 1\n");
        printf("if you want to subtract enter 2\n");
        printf("if you want to multiply enter 3\n");
        printf("if you want to divide enter 4\n");
        scanf("Enter: %d", &todo);

    }
    
    return 0;
}

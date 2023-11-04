#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// define global variable
int max = 5;
int stack[5];
int pos = -1;

//print method
void print(){
    for (int i = pos; i >= 0; i--)
        {
            if(i == pos)
                printf("\033[1;32m-               -\033[0m\n");
            if(i == 0){
                printf("\033[1;32m |      %d      |\033[0m\n", stack[0]);
                printf("\033[1;32m ---------------\033[0m\n");
            }
            else
                printf("\033[1;32m |      %d      |\033[0m\n", stack[i]);
        }
}

// push method
void push()
{
    int num;

    printf("Enter the element: ");
    scanf("%d", &num);
    if(pos == max)
        printf("\033[1;31mSTACK is OVERFLOW\033[0m");
    else if (pos == max - 1)
    {
        printf("\033[1;33mSTACK FULL!!!\033[0m");
        pos++;
    }
    else
    {
        pos++;
        stack[pos] = num;
        // print stack
        print();
    }
    printf("\n");
}

// pop method
int pop()
{
    printf("Elements are:\n");
    if (pos < 0)
        printf("\033[1;31mSTACK is UNDERFLOW\033[0m");
    else if(pos == 0)
    {
        printf("\033[1;33mSTACK EMPTY!!!\033[0m");
        pos--;
    }
    else
    {
        pos--;
        print();
    }
    printf("\n");
}

int main()
{
    int ch;
    printf("\033[1;31;47m STACK by KOUSHIK DEBNATH \033[0m\n");
    while (1)
    {
        printf("Please select operation:\n");
        printf("    1. PUSH\n");
        printf("    2. POP\n");
        printf("    3. EXIT\n");
        printf("SELECTION: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            exit(1);
            break;
        default:
            printf("Please fill the right option\n");
        }
    }
    getch();
    return 0;
}

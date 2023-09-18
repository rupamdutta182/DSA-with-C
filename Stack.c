#include <stdio.h>
#include <stdlib.h>
#define max 10
int stack[max];
int top = -1;

void push()
{
    int value;
    if (top == max - 1)
    {
        printf("\nStack is full.\n\n");
        return;
    }

    printf("Enter a value : ");
    scanf("%d", &value);
    stack[++top] = value;
}

void display()
{
    int i;
    if (top == -1)
    {
        printf("\nStack is empty..\n\n");
        return;
    }

    printf("\nStack is : ");
    for (i = top; i > -1; i--)
    {
        printf("%d ", stack[i]);
    }
    printf("\n\n");
}

void pop()
{
    if (top == -1)
    {
        printf("\nStack is empty..\n\n");
        return;
    }

    top--;
}

void Top()
{
    if (top == -1)
    {
        printf("\nStack is empty..\n\n");
        return;
    }

    printf("\nStack top : %d \n\n", stack[top]);
}

int main()
{
    int choice;
    while (1)
    {
        printf("Enter 1 : for Push..\n");
        printf("Enter 2 : for Display..\n");
        printf("Enter 3 : for Pop..\n");
        printf("Enter 4 : for Top..\n");
        printf("Enter 5 : for exit..\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            display();
            break;
        case 3:
            pop();
            break;
        case 4:
            Top();
            break;
        case 5:
            exit(0);
        default:
            printf("Please Enter Right Choice..\n");
            break;
        }
    }

    return 0;
}
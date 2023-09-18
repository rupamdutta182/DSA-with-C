#include <stdio.h>
#include <stdlib.h>
#define max 10
int Nqueue[max], front, rear;

void insertValueOnQueue()
{
    if (rear == max - 1)
    {
        printf("\nNQueue is full.\n\n");
        return;
    }

    if (front == -1)
    {
        front = rear = 0;
        printf("Enter value : ");
        scanf("%d", &Nqueue[rear]);
        return;
    }

    printf("Enter value : ");
    scanf("%d", &Nqueue[++rear]);
}

void deleteValueOnQueue()
{
    if (front == -1)
    {
        printf("\nNQueue is empty..\n\n");
        return;
    }

    if (front == rear)
    {
        front = rear = -1;
        return;
    }

    front++;
}

void displayValuesOnQueue()
{
    int i;
    if (front == -1)
    {
        printf("\nNQueue is empty..\n\n");
        return;
    }

    printf("\nNQueue is : ");
    for (i = front; i <= rear; i++)
    {
        printf("%d ", Nqueue[i]);
    }
    printf("\n\n");
}

int main()
{
    int choice;
    front = rear = -1;
    while (1)
    {
        printf("Enter 1 : for InsertValueOnQueue..\n");
        printf("Enter 2 : for DeleteValueOnQueue..\n");
        printf("Enter 3 : for DisplayValuesOnQueue..\n");
        printf("Enter 4 : for exit..\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertValueOnQueue();
            break;
        case 2:
            deleteValueOnQueue();
            break;
        case 3:
            displayValuesOnQueue();
            break;
        case 4:
            exit(0);
        default:
            printf("Please Enter Right Choice..\n");
            break;
        }
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define max 10
int cq[max], front = -1, rear = -1;

void insert();
void display();
void delete();
void getFront();

int main()
{
    int ch; // choice
    while (1)
    {
        printf("Enter 1: insert.\n");
        printf("Enter 2: display.\n");
        printf("Enter 3: delete.\n");
        printf("Enter 4: getFront.\n");
        printf("Enter 5: exit.\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            delete ();
            break;
        case 4:
            getFront();
            break;
        case 5:
            exit(0);

        default:
            printf("Please enter right choice.\n");
            break;
        }
    }
    return 0;
}

void insert()
{
    int val;

    // checking size
    if (((rear < front) && (rear + 1 == front)) || ((front < rear && front == 0) && (rear == max - 1)))
    {
        printf("Size is full.\n");
        return;
    }

    printf("Enter a value : ");
    scanf("%d", &val);

    if (front == -1)
    {
        front = rear = 0;
        cq[rear] = val;
        return;
    }

    if (rear == max - 1)
    {
        rear = 0;
        cq[rear] = val;
        return;
    }
    cq[++rear] = val;
}

void display()
{
    if (front == -1)
    {
        printf("Circular queue is empty.\n");
        return;
    }

    printf("\nCircular queue : ");
    if (front <= rear)
    {
        int i = front;
        while (i <= rear)
        {
            printf("%d ", cq[i]);
            i++;
        }
        printf("\n\n");
        return;
    }

    if (rear <= front)
    {
        int i = front;
        while (i <= max - 1)
        {
            printf("%d ", cq[i]);
            i++;
        }

        i = 0;
        while (i <= rear)
        {
            printf("%d ", cq[i]);
            i++;
        }

        printf("\n\n");
        return;
    }
}

void delete()
{
    if (front == -1)
    {
        printf("Circular queue is empty.\n");
        return;
    }

    if (front == rear)
    {
        front = rear = -1;
        return;
    }

    if (front == max - 1)
    {
        front = 0;
        return;
    }

    front++;
}

void getFront()
{
    if (front == -1)
    {
        printf("Circular queue is empty.\n");
        return;
    }

    printf("\nFront is : %d\n\n", cq[front]);
}
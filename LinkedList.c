#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *start;

void createLinkedList();
void insertAtBegin();
void insertAtEnd();
void insertAfter();
void deleteBegin();
void deleteEnd();
void display();
void reverseLinkedList();
void searchValue();
void printReverse();

int main(void)
{
    int ch, len, i; // choice variable
    start = NULL;

    while (1)
    {
        printf("Press 1: to create linkedlist.\n");
        printf("Press 2: to insertAtBegin.\n");
        printf("Press 3: to insertAtEnd.\n");
        printf("Press 4: to insertAfter.\n");
        printf("Press 5: to DeleteBegin.\n");
        printf("Press 6: to DeleteEnd.\n");
        printf("Press 7: to Display LinkedList.\n");
        printf("Press 8: to Reverse LinkedList.\n");
        printf("Press 9: to search a value.\n");
        printf("Press 10: to Print Reverse.\n");
        printf("Press 11: exit.\n");

        printf("Enter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the length of the list : ");
            scanf("%d", &len);
            for (i = 0; i < len; i++)
            {
                createLinkedList();
            }
            break;

        case 2:
            insertAtBegin();
            break;

        case 3:
            insertAtEnd();
            break;

        case 4:
            insertAfter();
            break;

        case 5:
            deleteBegin();
            break;

        case 6:
            deleteEnd();
            break;

        case 7:
            display();
            break;

        case 8:
            reverseLinkedList();
            break;

        case 9:
            searchValue();
            break;

        case 10:
            printReverse();
            break;

        case 11:
            exit(0);
            break;

        default:
            printf("\nPlease enter right choice.\n\n");
            break;
        }
    }
}

// create linkedlist
void createLinkedList()
{
    struct node *temp, *q;
    // dynamic memory allocation
    temp = (struct node *)malloc(sizeof(struct node));

    // input data
    printf("Enter a data : ");
    scanf("%d", &temp->data);

    if (start == NULL)
    {
        temp->next = start;
        start = temp;
        return;
    }

    q = start;
    while (q->next != NULL)
    {
        q = q->next;
    }

    temp->next = q->next;
    q->next = temp;
}

// insert begin
void insertAtBegin()
{
    struct node *temp;

    // dynamic memory allocation
    temp = (struct node *)malloc(sizeof(struct node));

    // input data
    printf("Enter a data : ");
    scanf("%d", &temp->data);

    temp->next = start;
    start = temp;
}

// insert end
void insertAtEnd()
{
    struct node *temp, *q;
    // dynamic memory allocation
    temp = (struct node *)malloc(sizeof(struct node));

    // input data
    printf("Enter a data : ");
    scanf("%d", &temp->data);

    q = start;
    while (q->next != NULL)
    {
        q = q->next;
    }
    temp->next = q->next;
    q->next = temp;
}

// display
void display()
{
    struct node *temp = start;

    printf("\nLinkedList is : ");
    while (temp->next != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d \n\n", temp->data);
}

void insertAfter()
{
    struct node *temp, *q;
    int i, pos;

    printf("Enter your position : ");
    scanf("%d", &pos);

    q = start;
    for (i = 0; i < pos - 1; i++)
    {
        if (q->next == NULL)
        {
            printf("Position is Not valid");
            return;
        }
        q = q->next;
    }

    // memory allocation
    temp = (struct node *)malloc(sizeof(struct node));
    // input the value which you are insert in a linkedlist
    printf("Enter a data : ");
    scanf("%d", &temp->data);

    temp->next = q->next;
    q->next = temp;
}

void deleteBegin()
{
    printf("Hello World.\n");
}

void deleteEnd()
{
    printf("Hello World.\n");
}

void reverseLinkedList()
{
    printf("Hello World.\n");
}

void searchValue()
{
    printf("Hello World.\n");
}

void printReverse()
{
    struct node *p, *q;

    if (start == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    printf("\nReverse Print : ");
    p = NULL;
    while (start != p)
    {
        q = start;
        while (q->next != p)
        {
            q = q->next;
        }
        printf("%d ", q->data);
        p = q;
    }
    printf("\n\n");
}
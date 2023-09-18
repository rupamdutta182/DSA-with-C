#include <stdio.h>
#include <stdlib.h>
#define max 20
int arr[max];
int n = -1;

// create list
void createList()
{
  int i;
  printf("Enter a length of a list : ");
  scanf("%d", &n);

  printf("Enter a %d item on list : ", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
}

// display list
void displayList()
{
  int i;
  if (n == -1)
  {
    printf("\nList is empty..\n\n");
    return;
  }

  printf("\nList is : ");
  for (i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n\n");
}

// insert fun
void insertFun()
{
  int insertValue;
  if (max == n)
  {
    printf("\nList is full..\n\n");
    return;
  }

  printf("Enter a value : ");
  scanf("%d", &insertValue);

  arr[n++] = insertValue;
}

// insert fun
void insertAtPosition()
{
  int insertValue, position, i;
  if (max == n)
  {
    printf("\nList is full..\n\n");
    return;
  }

  printf("Enter your position : ");
  scanf("%d", &position);
  printf("Enter a value : ");
  scanf("%d", &insertValue);

  for (i = n - 1; i >= position - 1; i--)
  {
    arr[i + 1] = arr[i];
  }
  arr[i] = insertValue;
  n++;
}

int main()
{
  int choice;
  while (1)
  {
    printf("Enter 1 : for CreateList..\n");
    printf("Enter 2 : for DisplayList..\n");
    printf("Enter 3 : for InsertValue on List..\n");
    printf("Enter 4 : for InsertValue at position..\n");
    printf("Enter 5 : for exit..\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      createList();
      break;
    case 2:
      displayList();
      break;
    case 3:
      insertFun();
      break;
    case 4:
      insertAtPosition();
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
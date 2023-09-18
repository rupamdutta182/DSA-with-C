#include <stdio.h>
// printing array
void printArray(int n, int arr[])
{

  printf("Array is : ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

// selection sort
void selectionSort(int n, int *arr)
{
  for (int i = 0; i < n - 1; i++)
  {
    int mini = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[mini] > arr[j])
      {
        mini = j;
      }
    }
    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
  }
}

// main function
void main()
{
  int n;
  printf("Enter length of the list : ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter a values : ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  printArray(n, arr);
  selectionSort(n, arr);
  printArray(n, arr);
}
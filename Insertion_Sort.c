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

// insertion sort
void insertionSort(int n, int *arr)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j > 0; j--)
    {
      if (arr[j] < arr[j - 1])
      {
        int temp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = temp;
      }
    }
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
  insertionSort(n, arr);
  printArray(n, arr);
}
#include <stdio.h>

// linear Search
int linearSearch(int n, int arr[], int target)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == target)
    {
      return 1;
    }
  }
  return -1;
}

int main()
{
  int n;
  printf("Enter a length of a array : ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter a value : ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  int search;
  printf("Enter a searching value : ");
  scanf("%d", &search);

  int isPresent = linearSearch(n, arr, search);
  if (isPresent == 1)
  {
    printf("value is present...\n");
  }
  else
  {
    printf("value is not present...\n");
  }
}
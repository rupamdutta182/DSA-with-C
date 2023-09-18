#include <stdio.h>

// binary search
int binarySearch(int n, int arr[], int target)
{
  int start = 0;
  int end = n - 1;
  int mid;
  while (start <= end)
  {
    mid = start + (end - start) / 2;
    if (arr[mid] == target)
    {
      return 1;
    }
    else if (arr[mid] < target)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
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

  int isPresent = binarySearch(n, arr, search);
  if (isPresent == 1)
  {
    printf("value is present...\n");
  }
  else
  {
    printf("value is not present...\n");
  }
}
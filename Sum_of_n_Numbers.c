#include <stdio.h>
int sumOfNth(int);

void main(void)
{
  int number;
  
  printf("Enter a Numbers : ");
  scanf("%d", &number);

  printf("N-th sum is : %d\n", sumOfNth(number));
}

// sum of n-th number recursive fun
int sumOfNth(int number)
{
  if (number == 0)
    return 0;

  return number + sumOfNth(number - 1);
}
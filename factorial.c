#include <stdio.h>
int fact(int);

void main()
{

  int num;
  printf("Enter Num : ");
  scanf("%d", &num);

  int ans = fact(num);

  printf("factorial is : %d", ans);

}

int fact(int n) 
{
  // base case 
  if(n == 1)
  {
    return 1;
  }

  int ans = n * fact(n - 1);

  return ans;
}
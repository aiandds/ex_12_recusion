#include<stdio.h>

int fib(int n);

int main()
{
  int n;
  printf("Enter the number :");
  scanf("%d",&n);

  for(int i=0;i<n;i++)
  {
    printf("%d  ",fib(i));
  }
  printf("\n");
  return 0;
}

int fib(int n)
{
  if((n==1)||(n==0))
  {
    return n;
  }
  else 
    return (fib(n-1)+fib(n-2));
}

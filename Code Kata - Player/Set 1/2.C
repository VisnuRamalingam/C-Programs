#include<stdio.h>
void main()
{
  int i,n,a=1;
  printf("Enter a number to find its factorial : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      a=a*i;
  }
  printf("\nThe Factorial is : %d",a);
}

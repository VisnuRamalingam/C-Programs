#include<stdio.h>
void main()
{
  int n,r;
  printf("Enter a number to reverse : ");
  scanf("%d",&n);
  while(n!=0)
  {
      r=r*10;
      r=r+n%10;
      n=n/10;
  }
  printf("\nThe reversed number is : %d",r);
}

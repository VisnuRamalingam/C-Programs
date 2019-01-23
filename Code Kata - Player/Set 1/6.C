#include <stdio.h>
#include <string.h>
void main()
{
     char a[50],temp;
     int i,j;
     printf("Enter a string : ");
     scanf("%s",a);
     printf("\nOriginal String : %s",a);
     for(i=0;i<strlen(a);i=i+2){
     temp = a[i];
     a[i] = a[i+1];
     a[i+1] = temp;
     }
     printf("\nAfter Swap String : %s",a);
}

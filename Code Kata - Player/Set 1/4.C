#include<stdio.h>
#include<string.h>
void main()
{
    char a[50],b[5]=".";
    printf("Enter a string : ");
    scanf("%s",a);
    strcat(a,b);
    printf("The entered string is : %s",a);
 }

#include<stdio.h>
#include<sting.h>
void main()
{
int i,b;
char c[5000];
printf("Enter the string to reverse :");
scanf("%s",c);
b=strlen(c);
printf("The string reverse is : ");
for(i=b-1;i>=0;i--)
{
printf("%c",c[i]);
}
}

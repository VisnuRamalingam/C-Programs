#include<stdio.h>
#include<string.h>
int main()
{
char a[1000];
printf("Enter A String :");
scanf("%s",&a);
strcat(a,".");
printf("The Entered String is : %s",a);
return 0;
}

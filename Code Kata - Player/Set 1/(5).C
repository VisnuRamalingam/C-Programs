#include <stdio.h>
int main(void) 

{
int n,i,res,s[20],temp=0;
char rn[10];
scanf("%s",rn);
n=strlen(rn);
for(i=0;i<n;i++)
{
	if(rn[i]=='I')
	a[i]=1;
	else if(rn[i]=='V')
	a[i]=5;
	else if(rn[i]=='X')
	a[i]=10;
	else if(rn[i]=='L')
	a[i]=50;
	else if(rn[i]=='C')
	a[i]=100;
	else if(rn[i]=='D')
	a[i]=500;
	else
	printf("\nINVALID");
}
for(i=0;i<n;i+=2)
{
	if(s[i]<s[i+1])
	{
		res=s[i+1]-s[i];
	}
	else 
	{
		res=s[i]+s[i+1];
	}
temp=res+t;

}
printf("\n%d",temp);
return 0;
}

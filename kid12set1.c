#include<stdio.h>
void main()
{
int n,i;
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag=0;
}
else
{
flag=1;
}
}
if(flag==1)
{
printf("prime number");
}
else
{
printf(" is not aprime number");
}
}


#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,c=0;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
if(n%i=0)
{
c++;
}
if(c==0)
{
printf("enter the prime number");
}
else
{
printf("is not a prime number");
}
}

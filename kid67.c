#include<stdio.h>
int main()
{
int n,num;
printf("\nenter the number");
scanf("%d",&n);
while(n!=0)
{
if(n%10==0)
{
printf("\n%d",n);
break;
}
n++;
return 0;
}

#include<stdio.h>
#include<conio.h>
void main()
{
int n,t ,r,,sum=0;
printf("enter the number");
scanf("%d",&n);
while(n>=0)
{
r=t%10;
s=s+(r*r*r);
t=t/10;
printf("armstrong num is %d",s);
getch();
}

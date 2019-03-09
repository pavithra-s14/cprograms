#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,fact=1;
clrscr();
printf("enter the number");
scanf("%d",&n);
for(i<=0;i<=n;i++)
{
fact=fact*i;
}
printf("%d",fact);
getch();
}

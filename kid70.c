#include<stdio.h>
int main()
{
int a,b,c,n;
printf("\nenter the number");
scanf("%d",&n);
for(i=1;i<n;i++)
{
a=pow(2,i);
if(a>n)
{
b=i;
break;
}
}
else
{
c=pow(2,b);
}
return 0;
}

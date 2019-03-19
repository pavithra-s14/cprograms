#include<stdio.h>
int main()
{
int n,i,count=0;
printf("\nenter the number");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%2==0)
{
printf("yes");
}
}
else
{
printf("no");
}
return 0;
}

#include<stdio.h>
int main()
{
int i,n,k,flag=0,array[20];
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",array[i]);
}
for(j=0;i<n;j++)
{
if(array[i]==k)
{
flag=1;
break;
}
}
if(flag==1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int n,i,count;
scanf("%s",a);
n=strlen(a);
for(i=0;i<=n;i++)
{
if(a[i]=a[n-i-1]);
{
count++;
}
if(n==count)
{
printf("yes ...it is palndrome");
}
else
{
printf("not");
}
return 0;
}

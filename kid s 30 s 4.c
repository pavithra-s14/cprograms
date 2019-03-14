#include<stdio.h>
void main()
{
int i,x=0;y=1;
printf("\n fibonic series");
scanf("\nx=%d\ty=%d",x,y);
for(i=1;i<=20;i++)
{
s=x+y;
printf("\t%d",s);
x=y;
y=s;
}
}

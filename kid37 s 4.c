#include<stdio.h>
void swap(int *,int*);
void main()
{
int x,y;
printf("\n enter the value x");
scanf("%d",&x);
printf("\n enter the value y");
scanf("%d",&y);
printf("\n values before calling swap");
scanf("\nx=%d\ty=%d",x,y);
swap(&x,&y);
printf("\n values before calling swap);
printf("\n values after calling swap);
scanf("\nx=%d\ty=%d",x,y);
}
void swap(int*a,int*b);
{
int t;
t=*a;
*a=*b;
*b=t;
}

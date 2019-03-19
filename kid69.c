#include<stdio.h>
int main()
{
int n1,n2,diff;
printf("\n enter the number1");
scanf("%d",&n1);
printf("\n enter the number2");
scanf("%d",&n2);
diff=n1-n2;
if(diff%2==0)
{
printf("\neven");
}
else
{
printf("\nodd");
}
return 0;
}

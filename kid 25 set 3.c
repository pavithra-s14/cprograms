#include<stsdio.h>
int main()
int n,i,med;
scanf("%d"/n",&n);
int a[n];
for(i=0;i<=n;i++)
scanf("%d",&a[i]);
med=a[0];
for(i=1;i<=n;i++)
{
if(med<a[i])
med=a[i];
}
printf("%d',med);
return0 ;
}

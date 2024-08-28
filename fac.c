`#include<stdio.h>
main()
{

int n,i,fac;
printf("enter number:");
scanf("%d",&n);

for(i=1;i<=n;i++)
fac=fac*i;
printf("fac num that is:%d",fac);
}

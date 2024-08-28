#include<stdio.h>
fac(int n) // parameter with
{
	int i,fac=1;
	
	for(i=1;i<=n;i++)
	{
		fac*=i;
	}
	printf("factorial:%d", fac);
	
}

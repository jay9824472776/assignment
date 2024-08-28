#include<stdio.h>
fac(int n)
{
	int i,fac=1;
	for(i=1;i<=n;i++)
	
	{
		fac=fac*i;
		
	}
	
	printf("fac num answer:%d",fac);
}
main()
{
	fac(5);
}


#include<stdio.h>
main()
{
	int n,i;
	
	
	for(i=1;i<=3;i++)	
	{
	printf("enter number: ");
	scanf("%d", &n);
			
		if(n%2==0)
		{
			printf("number is even\n , %d", n);
		}
	else
	{ 

	printf("number is odd\n , %d",n);
	}
}
}

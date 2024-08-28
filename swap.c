#include<stdio.h>
main()
{
	int n1, n2,temp;
	printf("enter swap:");
	scanf("%d",&n1);
	printf("enter swap 2:");
	scanf("%d",&n2);
	
	temp=n1;
	n1 = n2;
	n2 = temp;
	
	printf("swap A: %d",n1);
	printf("swap B: %d",n2);
	
	
	
	}

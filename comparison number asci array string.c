#include<stdio.h>
#include<string.h>
main()
{
	char a[5],b[5];
	
	printf("enetr string 1:");
	gets(a);
	printf("enetr string 2 :");
	gets(b);
	
	int result = strcmp(a,b);
	printf("comparision is : %d", result);
	
}

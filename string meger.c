#include<stdio.h>
#include<string.h>
main()
{
	char a[5];
	char b[5];
	
	printf("enetr string 1:");
	gets(a);
	printf("enetr string 2 :");
	gets(b);
	
	printf("merger string is : %s", strcat(a,b));
	
}

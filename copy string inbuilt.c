#include<stdio.h>
#include<string.h>
main()

{
	char a[20],b[20];
	
	printf("enter string 1 : ");
	gets(a);
	
	strcpy(b,a);
	
	printf("copy string is : %s" , b);
}

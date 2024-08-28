#include<stdio.h>
#include<string.h>

main()
{
	
	char a[20],b[20];
	int i;
	printf("enter string 1 : ");
	gets(a);
	
	
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	
	printf("copy string is: %s", b);
}

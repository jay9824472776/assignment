#include<stdio.h>
#include<string.h>
main()
{
	int i,j;
	char a[5];
	char b[5];
	
	printf("enetr string 1:");
	gets(a);
	printf("enetr string 2 :");
	gets(b);
	
	
	for(i=0;a[i]!='\0';i++);
	for(j=0;b[j]!='\0';j++)

	{
	
	a[i]=b[i];
	i++;
}
a[i]='\0';
	printf("merger string is : %s", a);
	
}


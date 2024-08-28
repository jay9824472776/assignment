#include<stdio.h>
#include<string.h>
main()
{
char a[25], i;
int len=0;
printf("enter number:");
gets(a);

for(i=0;a[i]!='\0';i++)
{
	len++;
}

printf("length of string is : %d", len);

}

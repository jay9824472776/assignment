#include<stdio.h>
main()
{
	
	
	float a,b,sum,multiplication,substraction,division;
	
	printf("calculator:");
	scanf("%f%f", &a,&b);
	
	sum=a+b;
	printf("sum:%f",sum);
	
	multiplication=a*b;
	printf("multiplication:%f", multiplication);
	
	
	substraction=a-b;
	printf("substraction:%f", substraction);
	
	
	division=a/b;
	printf("division:%f",division);

	
	//int modul= a % b ;
	printf("modulo(percentage):%d",(float)modul);
	
}
	

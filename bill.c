#include<stdio.h>
main()
{
	while(1) 
	{             //infinite loop
	printf("\nMENU" );
	printf("\n\nITEMS\n");
	printf("\n1.Pizza = 110rs.per item, \n2.Burger = 49rs. per item, \n3.Pepsi(In Alluminium tin Can) = 45rs.per item, \n4.Thums up(2 liter) = 85rs.per item");
	
	int choice;
	printf("\nplease enter the number for item (for example press 1 for pizza)");
    scanf("%d", &choice);
    
	
	
	if(choice==1)
	
	{
		printf("you have selected Pizza");
		break;
	}
	else if(choice==2)
	{
		printf("you have selected Burger");
		break;
	}
	else if(choice==3)
	{
		printf("you have selected pepsi tin can");
		break;
	}
	else (choice==4)
	{
		printf("you have selected thumsup");
		break;
	}	
	
	}
}

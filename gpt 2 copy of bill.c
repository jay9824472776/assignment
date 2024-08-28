#include<stdio.h>

main()
{
    while(1)  // Infinite loop
    	{
    	while(1)
    {
	
        printf("\nMENU" );
        printf("\nITEMS\n");
        printf("\n1.Pizza = 110Rs.per item, \n2.Burger = 49rs. per item, \n3.Pepsi(In Alluminium tin Can) = 45rs.per item, \n4.Thums up(2 liter) = 85rs.per item");

        int choice;
        printf("\nplease enter the number for item (for example press 1 for pizza) :");
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
        else if(choice==4)  // Line 34
        {
            printf("you have selected thums up");
            break;
        }
	}	
        int quntity;
        printf("enter the quntity per item:");
        scanf("%d", & quntity);
        
        if(quntity>10)
        
        {
        	printf("%dyou have entered quntity of pizza:", quntity);
        	printf("%dTotal amount of pizza is:", quntity*110);
        	
    	}
		
		else (quntity>10)
		{
		
			printf("%dyou have entered quntity of burger:", quntity);
        	printf("%dTotal amount of burger is:", quntity*49);
        	break;
   		}
        	
		}
}



#include<stdio.h>

main()
{
    while(1)  // Infinite loop
    	{
    	
        printf("\n-----MENU-----" );
        printf("\nITEMS\n");
        printf("\n1.Pizza = 110Rs.per item, \n2.Burger = 49rs. per item, \n3.Pepsi(In Alluminium tin Can) = 45rs.per item, \n4.Thums up(2 liter) = 85rs.per item");

        int choice,quntity;
        printf("\nplease enter the number for item (for example press 1 for pizza) :");
        scanf("%d", &choice);

        if(choice==1 )
        {
            printf("you have selected Pizza",choice);
    	
		
	        printf("please select the quntity %d:",quntity);
    	
            break;
        }
        else if(choice==2 && quntity==quntity*49)
        {
            printf("you have selected Burger");
            
            
	        printf("please select the quntity %d:",quntity);
    	
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
        int pizza,burger,pepsi,thumsup;
        printf("enter the quntity per item:");
        scanf("%d", & pizza);
        printf("Total amount of pizza is:%d", pizza*110);
        
		printf("enter the quntity per item:");
        scanf("%d", & burger);
        printf("Total amount of burger is:%d", burger*49);
        
        	printf("enter the quntity per item:");
        scanf("%d", & pepsi);
        printf("Total amount of pepsi is:%d", pepsi*45);
        
        	printf("enter the quntity per item:");
        scanf("%d", & thumsup);
        printf("Total amount of thums up is:%d", thumsup*85);
        
        		
    	}
		
		
               	


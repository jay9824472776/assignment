#include <stdio.h>

int main() {
    int choice,quantity;
    int amount=0,totalamount = 0,amount1=0,amount2=0,amount3=0,amount4=0, pizza_amount=0,burger_amount=0,dosa_amount=0,idli_amount=0;
    char continueOrdering;

    do {
        printf("1.Pizza\n");
        printf("price = 180rs/pcs\n");
        printf("2.Burger\n");
        printf("price = 100rs/pcs\n");
        printf("3.Dosa\n");
        printf("price = 120rs/pcs\n");
        printf("4.Idli\n");
        printf("price = 50rs/pcs\n");

        printf("Please Enter your choice... :");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("You have selected Pizza.\n");
            printf("Enter the quantity :");
            scanf("%d", &quantity);
            amount1 += 180 * quantity;
            printf("Amount is = %d\n", amount1);
            pizza_amount=amount1;
            
        } else if (choice == 2) {
            printf("You have selected Burger.\n");
            printf("Enter the quantity :");
            scanf("%d", &quantity);
            amount2 += 100 * quantity;
            printf("Amount is = %d\n", amount2);
            burger_amount=amount2;
        } else if (choice == 3) {
            printf("You have selected Dosa.\n");
            printf("Enter the quantity :");
            scanf("%d", &quantity);
            amount3 += 120 * quantity;
            printf("Amount is = %d\n", amount3);
            dosa_amount=amount3;
        } else if (choice == 4) {
            printf("You have selected Idli.\n");
            printf("Enter the quantity :");
            scanf("%d", &quantity);
            amount4 += 50 * quantity;
            printf("Amount is = %d\n",amount4);
            idli_amount=amount4;
        } else {
            printf("Invalid choice!\n");
        }

        
        printf("total amount is = %d\n",totalamount=pizza_amount+burger_amount+dosa_amount+idli_amount);

        printf("Do you want to place more orders? y & n :");
        scanf(" %c", &continueOrdering);

    } while (continueOrdering == 'y');

    return 0;
}


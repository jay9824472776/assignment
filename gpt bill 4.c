#include <stdio.h>

int main() {
    int choice, quantity;
    char moreOrders;
    int totalAmount = 0;

    do {
        // Display the menu
        printf("------ Menu ------\n");
        printf("1. Pizza       price = 180rs/pcs\n");
        printf("2. Burger      price = 100rs/pcs\n");
        printf("3. Dosa        price = 120rs/pcs\n");
        printf("4. Idli        price = 50rs/pcs\n");
        printf("Please Enter your choice...: ");
        scanf("%d", &choice);

        // Get the quantity
        printf("Enter the quantity: ");
        scanf("%d", &quantity);

        // Calculate the amount based on the choice
        switch(choice) {
            case 1:
                printf("You have selected Pizza.\n");
                totalAmount += 180 * quantity;
                break;
            case 2:
                printf("You have selected Burger.\n");
                totalAmount += 100 * quantity;
                break;
            case 3:
                printf("You have selected Dosa.\n");
                totalAmount += 120 * quantity;
                break;
            case 4:
                printf("You have selected Idli.\n");
                totalAmount += 50 * quantity;
                break;
            default:
                printf("Invalid choice! Please choose again.\n");
                continue;
        }

        // Print the amount and total amount
        printf("Amount : %d\n", totalAmount);
        printf("Total Amount is = %d\n", totalAmount);

        // Ask if the user wants to place more orders
        printf("Do you want to place more orders? (y/n): ");
        scanf(" %c", &moreOrders);

    } while (moreOrders == 'y' || moreOrders == 'Y');

    printf("Final Total Amount is = %d\n", totalAmount);
    printf("Thank you for your order!\n");

    return 0;
}


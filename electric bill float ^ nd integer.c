#include <stdio.h>

int main() {
    int customerID;
    char customerName[100];
    float unitsConsumed, billAmount;

    // Prompt the user to enter customer details
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", customerName); // Read a line of text including spaces

    printf("Enter units consumed: ");
    scanf("%f", &unitsConsumed);

    // Calculate bill amount based on unit consumption
    if (unitsConsumed <= 350) {
        billAmount = unitsConsumed * 1.20;
    } 
    else if (unitsConsumed > 350 && unitsConsumed < 600) {
        billAmount = unitsConsumed * 1.50;
    } 
    else if (unitsConsumed >= 600 && unitsConsumed < 800) {
        billAmount = unitsConsumed * 1.80;
    } 
    else {
        billAmount = unitsConsumed * 2.00;
    }

    // Print the bill details
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %.2f\n", unitsConsumed);
    printf("Total Bill Amount: %.2f\n", billAmount);

    return 0;
}


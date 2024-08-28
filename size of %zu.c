#include <stdio.h>

int main() {
    int num1, num2, sum;
    size_t size_of_sum;

    // Accept two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Check the size of the sum
    size_of_sum = sizeof(sum);

    // Print the sum and its size
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);
    printf("The size of the sum variable is: %zu bytes\n", size_of_sum);

    return 0;
}


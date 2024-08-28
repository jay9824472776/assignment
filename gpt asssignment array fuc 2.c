#include <stdio.h>

int main() {
    int choice, a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\nEnter choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1: printf("Result: %d\n", a + b); break;
        case 2: printf("Result: %d\n", a - b); break;
        case 3: printf("Result: %d\n", a * b); break;
        case 4: if (b != 0) printf("Result: %d\n", a / b); else printf("Cannot divide by zero\n"); break;
        default: printf("Invalid choice\n"); break;
    }
    return 0;
}


#include <stdio.h>

int main() {
    int numbers[5];
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
        printf("%d is %s\n", numbers[i], (numbers[i] % 2 == 0) ? "Even" : "Odd");
    }
    return 0;
}


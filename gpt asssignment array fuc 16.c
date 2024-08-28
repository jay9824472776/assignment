#include <stdio.h>

int main() {
    int numbers[5], sum = 0,i;
    printf("Enter 5 numbers:\n");
    for ( i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    printf("Sum of the numbers: %d\n", sum);
    return 0;
}


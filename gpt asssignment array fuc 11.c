#include <stdio.h>

int main() {
    int numbers[5], i;
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &numbers[i]);
    printf("Numbers in reverse order:\n");
    for (i = 4; i >= 0; i--)
        printf("%d ", numbers[i]);
    printf("\n");
    return 0;
}


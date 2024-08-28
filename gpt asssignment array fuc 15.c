#include <stdio.h>

int main() {
    int numbers[5] = {5, 2, 9, 1, 6};
    int i, j, temp;
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (numbers[i] > numbers[j]) {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    printf("Sorted Numbers:\n");
    for (i = 0; i < 5; i++)
        printf("%d ", numbers[i]);
    printf("\n");
    return 0;
}


#include <stdio.h>

#define SIZE 2  // Example size for small matrix

void addMatrix(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            C[i][j] = A[i][j] + B[i][j];
}

int main() {
    int A[SIZE][SIZE] = {{1, 2}, {3, 4}}, B[SIZE][SIZE] = {{2, 3}, {4, 5}}, C[SIZE][SIZE];
    addMatrix(A, B, C);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}


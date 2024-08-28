#include <stdio.h>

int main() {
    int a[2][3]={{0,1,2},{3,4,5,}}, b[2][3]={{6,7,8},{9,10,11}};
    int i, j;

    // Input elements for array a
    printf("Enter elements for A array:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element a[%d][%d]: ", i, j);
            
        }
    }

    // Input elements for array b
    printf("Enter elements for B array:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element b[%d][%d]: ", i, j);
            
        }
    }

    // Addition of matrices
    printf("Addition of matrices A and B:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", a[i][j] + b[i][j]);
        }
        printf("\n");
    }

    return 0;
}


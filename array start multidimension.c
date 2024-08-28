#include <stdio.h>

main()
{
    int a[2][3];
    int i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element: ");
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("The element is: %d", a[i][j]);
        }
    }
}


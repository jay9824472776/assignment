#include <stdio.h>

main()
{
    int a[2][3]={{0,1,2},{3,4,5}};
    int i, j;

    

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("The element is: %d", a[i][j]);
        }
    }
}


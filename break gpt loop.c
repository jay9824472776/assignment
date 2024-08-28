#include<stdio.h>
main()
{
	
    int i = 1;

    printf("do-while loop:\n");
    do {
        if (i == 3) {
            printf("Breaking at (first break)\n", i);
            break; // First break condition
        }
        if (i == 4) {
            printf("Breaking at i = %d (second break)\n", i);
            break; // Second break condition
        }
        printf("i = %d\n", i);
        i++;
    } while (i <= 5);

    return 0;
}



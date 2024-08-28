#include<stdio.h>
#include<string.h>

int main()
{
    char a[20], b[20];

    printf("enter string:");
    fgets(a, sizeof(a), stdin);

    // Remove the newline character if present
    a[strcspn(a, "\n")] = '\0';

    strcpy(b, a);

    printf("copy string: %s", b);

    return 0;
}


#include <stdio.h>

int main() {
    char names[5][100];
    printf("Enter 5 students' names:\n");
    for (int i = 0; i < 5; i++)
        fgets(names[i], 100, stdin);
    printf("Stored Names:\n");
    for (int i = 0; i < 5; i++)
        printf("%s", names[i]);
    return 0;
}


#include <stdio.h>

void reverse(const char *str) {
    if (*str) {
        reverse(str + 1);
        printf("%c", *str);
    }
}

int main() {
    char str[] = "hello";
    reverse(str);
    printf("\n");
    return 0;
}


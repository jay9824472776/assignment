#include <stdio.h>

int stringLength(const char* str) {
    int length = 0;
    while (str[length])
        length++;
    return length;
}

int main() {
    char str[] = "Hello, World!";
    printf("Length: %d\n", stringLength(str));
    return 0;
}


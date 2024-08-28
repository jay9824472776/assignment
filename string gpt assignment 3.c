#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    int length = 0;
    while (str[length] != '\0') // Find the string length
        length++;
    
    printf("Reversed characters of the string:\n");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }
    return 0;
}


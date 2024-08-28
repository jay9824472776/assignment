#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) str[i] = toupper(str[i]);
        else if (isupper(str[i])) str[i] = tolower(str[i]);
    }
    printf("Modified string: %s\n", str);
    return 0;
}


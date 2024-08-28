#include <stdio.h>

int main() {
    char str[] = "Hello,\nWorld!\nThis is a test.";
    int max_length = 0, current_length = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n' || str[i] == '\0') {
            if (current_length > max_length)
                max_length = current_length;
            current_length = 0;
        } else {
            current_length++;
        }
    }

    printf("Maximum number of characters in a line: %d\n", max_length);
    return 0;
}


#include <stdio.h>
#include <ctype.h>

int countWords(const char* str) {
    int count = 0;
    int inWord = 0;
    while (*str) {
        if (!isspace(*str) && !inWord) {
            count++;
            inWord = 1;
        } else if (isspace(*str)) {
            inWord = 0;
        }
        str++;
    }
    return count;
}

int main() {
    char str[] = "Hello, World! This is an example.";
    printf("Total number of words: %d\n", countWords(str));
    return 0;
}


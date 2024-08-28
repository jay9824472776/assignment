#include <stdio.h>
#include <string.h>

int countWord(const char* str, const char* word) {
    int count = 0;
    const char* tmp = str;
    while ((tmp = strstr(tmp, word)) != NULL) {
        tmp += strlen(word); // Move past the word
        count++;
    }
    return count;
}

int main() {
    char str[] = "This is a test. Is it working?";
    printf("Occurrences of 'is': %d\n", countWord(str, "is"));
    return 0;
}


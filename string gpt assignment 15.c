#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[] = "Hello world, this is a test string.";
    char word[50], maxWord[50], minWord[50];
    int i = 0, j = 0, maxLength = 0, minLength = 100;

    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            word[j++] = str[i];
        } else if (j > 0) {
            word[j] = '\0';
            if (j > maxLength) {
                maxLength = j;
                strcpy(maxWord, word);
            }
            if (j < minLength) {
                minLength = j;
                strcpy(minWord, word);
            }
            j = 0;
        }
        i++;
    }

    printf("Largest Word: %s\n", maxWord);
    printf("Smallest Word: %s\n", minWord);
    return 0;
}


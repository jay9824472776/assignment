#include <stdio.h>
#include <string.h>

void reverse(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int isPalindrome(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
        if (str[i] != str[len - 1 - i])
            return 0;
    return 1;
}

int main() {
    char str[] = "radar";
    reverse(str);
    printf("Reversed: %s\n", str);
    printf("Is Palindrome? %s\n", isPalindrome(str) ? "Yes" : "No");
    return 0;
}


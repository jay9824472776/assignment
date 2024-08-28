#include <stdio.h>

int isPalindrome(int num) {
    int reversed = 0, original = num;
    for (; num != 0; num /= 10)
        reversed = reversed * 10 + num % 10;
    return original == reversed;
}

int main() {
    int number = 12321;
    printf("%d is %s\n", number, isPalindrome(number) ? "a palindrome" : "not a palindrome");
    return 0;
}


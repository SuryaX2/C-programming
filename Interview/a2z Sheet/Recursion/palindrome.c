// Check if a string is palindrome or not using recursion
#include <stdio.h>
#include <string.h>
#define true 1
#define false 0

int isPalindrome(char str[], int i) {
    if (i > strlen(str) / 2) {
        return true;
    }
    if (str[i] != str[strlen(str) - i - 1]) {
        return false;
    }
    isPalindrome(str, i + 1);
}

int main() {
    char str[10];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isPalindrome(str, 0)) {
        printf("%s is a palindrome\n", str);
    } else {
        printf("%s is not a palindrome\n", str);
    }
    return 0;
}
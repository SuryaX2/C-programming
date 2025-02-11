// 21.WAP to identify an user given number is Palindrome or not
#include <stdio.h>
int isPalindrome(int n) {
    int rev = 0;
    for (int x = n; x != 0; x /= 10)
        rev = rev * 10 + x % 10;
    return rev == n;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPalindrome(n)) {
        printf("%d is a palindrome number\n", n);
    } else {
        printf("%d is not a palindrome number\n", n);
    }
    return 0;
}
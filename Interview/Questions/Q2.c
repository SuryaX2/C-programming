// 2.WAP to check A character is an alphabet or not
#include <stdio.h>
int isAlphabet(char ch) {
    return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) ? 1 : 0;
}
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (isAlphabet(ch)) {
        printf("%c is an alphabet\n", ch);
    } else {
        printf("%c is not an alphabet\n", ch);
    }
    return 0;
}
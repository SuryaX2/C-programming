// 1.WAP to check A character is a vowel or consonant
#include <stdio.h>
int isVowel(char ch) {
    return (
               ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
               ? 1
               : 0;
}
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (isVowel(ch)) {
        printf("%c is a vowel\n", ch);
    } else {
        printf("%c is a consonant\n", ch);
    }
    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("\nEnter size of message: ");
    scanf("%d", &n);
    char data[n + 2];  // +2 to accommodate parity bit and null terminator
    printf("\nEnter the message: ");
    scanf("%s", data);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (data[i] == '1')
            count++;
    }
    char parityBit = (count % 2 == 0) ? '1' : '0';
    data[n] = parityBit;
    data[n + 1] = '\0';
    printf("Message with parity bit: %s\n", data);
    return 0;
}

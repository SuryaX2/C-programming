#include <stdio.h>
#include <string.h>

void sender(char a[20], char b[20])
{
    char sum[20], complement[20];
    int length = strlen(a);
    int carry = 0;

    // Check if lengths of both binary strings are equal
    if (length != strlen(b))
    {
        printf("\nWrong input strings. Lengths must be the same.\n");
        return;
    }

    // Perform binary addition
    for (int i = length - 1; i >= 0; i--)
    {
        int bitSum = (a[i] - '0') + (b[i] - '0') + carry;
        sum[i] = (bitSum % 2) + '0';
        carry = bitSum / 2;
    }

    // Print the sum
    printf("\nSum = %d%s\n", carry, sum);

    // Compute the checksum (1's complement of sum)
    for (int i = 0; i < length; i++)
    {
        complement[i] = (sum[i] == '0') ? '1' : '0';
    }

    // If there's a carry in the sum, we need to add it to the complement
    if (carry == 1)
    {
        carry = 0;
    }
    else
    {
        carry = 1;
    }

    printf("Checksum = %d%s\n", carry, complement);
}

int main()
{
    char a[20], b[20];

    printf("Enter first binary string:\n");
    scanf("%s", a);
    printf("Enter second binary string:\n");
    scanf("%s", b);

    sender(a, b);

    return 0;
}

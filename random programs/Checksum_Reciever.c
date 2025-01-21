#include <stdio.h>
int data[32][32] = {0};
int k, n;  // k = No. of sections, n = No. of bits in each section
int verifyChecksum() {
    int carry = 0;
    int finalSum[32] = {0};           // To store the sum of each bit position
    for (int i = n - 1; i >= 0; i--)  // Sum all the sections including the checksum
    {
        int sum = carry;
        for (int j = 0; j <= k; j++)  // Loop through all sections including checksum
            sum += data[j][i];
        finalSum[i] = sum % 2;  // Store the result for this bit
        carry = sum / 2;        // Carry over to the next higher bit
    }
    while (carry > 0)  // Handle leftover carry
    {
        for (int i = n - 1; i >= 0; i--) {
            finalSum[i] += carry;
            carry = finalSum[i] / 2;
            finalSum[i] %= 2;
        }
    }
    for (int i = 0; i < n; i++)  // Check if the final sum is all 1's
    {
        if (finalSum[i] != 1)
            return 0;  // Invalid checksum
    }
    return 1;  // Valid checksum
}
int main() {
    printf("\nEnter no of sections: ");
    scanf("%d", &k);
    printf("\nEnter no of bits in each section: ");
    scanf("%d", &n);
    for (int i = 0; i < k; i++) {
        printf("\nEnter section [%d]: ", i + 1);
        for (int j = 0; j < n; j++)
            scanf("%d", &data[i][j]);
    }
    printf("\nEnter the checksum: ");
    for (int j = 0; j < n; j++)
        scanf("%d", &data[k][j]);
    if (verifyChecksum())
        printf("\nChecksum is valid.\n");
    else
        printf("\nChecksum is invalid.\n");
    return 0;
}

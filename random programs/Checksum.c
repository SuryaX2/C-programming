#include <stdio.h>
int data[32][32] = {0};
int k, n;  // k = No. of sections, n = No. of bits in each section
void decToBin(int dec, int *bin) {
    for (int i = n - 1; i >= 0; i--) {
        bin[i] = dec % 2;
        dec /= 2;
    }
}
void generateChecksum() {
    int carry = 0;
    for (int i = n - 1; i >= 0; i--)  // sum up all the sections
    {
        int sum = carry;
        for (int j = 0; j < k; j++)
            sum += data[j][i];
        data[k][i] = sum % 2;
        carry = sum / 2;
    }
    int carryBits[32] = {0};
    decToBin(carry, carryBits);  // convert carry to binary

    carry = 0;
    for (int i = n - 1; i >= 0; i--)  // sum the carry bits with the sum
    {
        int sum = data[k][i] + carryBits[i] + carry;
        data[k][i] = sum % 2;
        carry = sum / 2;
    }
    for (int i = 0; i < n; i++)  // Take 1's complement
        data[k][i] = (data[k][i] == 0) ? 1 : 0;
}

int main() {
    printf("\nEnter no of sections:");
    scanf("%d", &k);
    printf("\nEnter no of bits in each section:");
    scanf("%d", &n);
    for (int i = 0; i < k; i++) {
        printf("\nEnter section [%d]:", i + 1);
        for (int j = 0; j < n; j++) {
            scanf("%d", &data[i][j]);
        }
    }
    generateChecksum();
    printf("\nChecksum generated:");
    for (int j = 0; j < n; j++)
        printf("%d ", data[k][j]);
}
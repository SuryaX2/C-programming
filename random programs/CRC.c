#include <stdio.h>
#include <string.h>
#define N strlen(gen_poly)

char data[28], check_value[28], gen_poly[10];
int data_length, i, j;
void crc();

void XOR() {
    for (j = 1; j < N; j++)
        check_value[j] = ((check_value[j] == gen_poly[j]) ? '0' : '1');
}
void receiver() {
    printf("\nEnter the received data: ");
    scanf("%s", data);
    // data_length = strlen(data) - (N - 1); // add only if you are doing receiver side
    printf("\nData received: %s", data);
    crc();
    for (i = 0; (i < N - 1) && (check_value[i] != '1'); i++);
    if (i < N - 1)
        printf("\nError detected\nRemainder : %s\n", check_value);
    else
        printf("\nNo error detected\nRemainder : %s\n", check_value);
}

void crc() {
    for (i = 0; i < N; i++)
        check_value[i] = data[i];
    do {
        if (check_value[0] == '1')
            XOR();
        for (j = 0; j < N - 1; j++)
            check_value[j] = check_value[j + 1];
        check_value[j] = data[i++];
    } while (i <= data_length + N - 1);
}

int main() {
    printf("\nEnter data to be transmitted: ");
    scanf("%s", data);
    printf("\nEnter the Generating polynomial: ");
    scanf("%s", gen_poly);
    data_length = strlen(data);
    for (i = data_length; i < data_length + N - 1; i++)
        data[i] = '0';
    printf("\nData padded with n-1 zeros : %s", data);
    crc();
    printf("\nCRC is : %s", check_value);
    strncpy(data + data_length, check_value, N - 1);
    printf("\nFinal data to be sent : %s", data);
    receiver();
    return 0;
}

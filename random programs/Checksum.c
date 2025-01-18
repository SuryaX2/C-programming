#include <stdio.h>
#include <string.h>

void calculateChecksum(char data[20], char checksum[20])
{
    int length = strlen(data);
    char complement[20];
    int carry = 0;

    // Calculate 1's complement (flip bits)
    for (int i = 0; i < length; i++)
    {
        complement[i] = (data[i] == '0') ? '1' : '0';
    }
    complement[length] = '\0';

    // Add carry if any (here, no addition needed for the complement itself)
    strcpy(checksum, complement);
}

void sender()
{
    char data[20], checksum[20];

    printf("\n--- Sender Side ---\n");
    printf("Enter the binary data:\n");
    scanf("%s", data);

    // Calculate checksum
    calculateChecksum(data, checksum);

    printf("Data to be sent: %s\n", data);
    printf("Checksum: %s\n", checksum);
}

void receiver()
{
    char data[20], checksum[20], receivedData[20];
    char complement[20];
    int carry = 0;

    printf("\n--- Receiver Side ---\n");
    printf("Enter the received binary data:\n");
    scanf("%s", data);
    printf("Enter the received checksum:\n");
    scanf("%s", checksum);

    int length = strlen(data);

    // Add data and checksum
    for (int i = length - 1; i >= 0; i--)
    {
        int bitSum = (data[i] - '0') + (checksum[i] - '0') + carry;
        receivedData[i] = (bitSum % 2) + '0';
        carry = bitSum / 2;
    }

    // Compute complement of the result
    for (int i = 0; i < length; i++)
    {
        complement[i] = (receivedData[i] == '0') ? '1' : '0';
    }
    complement[length] = '\0';

    printf("Complement of the result: %s\n", complement);

    // Check if result is all zeros
    int valid = 1;
    for (int i = 0; i < length; i++)
    {
        if (complement[i] == '1')
        {
            valid = 0;
            break;
        }
    }

    if (valid)
    {
        printf("No error in transmission. Data is valid.\n");
    }
    else
    {
        printf("Error in transmission. Data is invalid.\n");
    }
}

int main()
{
    int choice;
    do
    {
        printf("\n--- Checksum Program ---\n");
        printf("1. Sender\n2. Receiver\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            sender();
            break;
        case 2:
            receiver();
            break;
        case 3:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. Try again.\n");
        }
    } while (choice != 3);

    return 0;
}

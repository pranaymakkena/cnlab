/*
2. Write a program to compute CRC code for the polynomials
   CRC-12, CRC-16 and CRC CCIP.
*/

#include <stdio.h>
#include <string.h>

void crc(char data[], char key[]) {
    int i, j;
    int data_len = strlen(data);
    int key_len = strlen(key);

    char temp[100], rem[100];

    strcpy(temp, data);

    for (i = 0; i < key_len - 1; i++)
        temp[data_len + i] = '0';

    temp[data_len + key_len - 1] = '\0';

    for (i = 0; i <= data_len - 1; i++) {
        if (temp[i] == '1') {
            for (j = 0; j < key_len; j++) {
                temp[i + j] = (temp[i + j] == key[j]) ? '0' : '1';
            }
        }
    }

    strncpy(rem, temp + data_len, key_len - 1);
    rem[key_len - 1] = '\0';

    printf("CRC Remainder: %s\n", rem);
}

int main() {
    char data[100], key[20];

    printf("Enter data: ");
    scanf("%s", data);

    printf("Enter generator polynomial: ");
    scanf("%s", key);

    crc(data, key);

    return 0;
}

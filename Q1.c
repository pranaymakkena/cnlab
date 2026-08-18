/*
1. Implement the data link layer framing methods such as character count,
   character-stuffing and bit stuffing.
*/

#include <stdio.h>
#include <string.h>

/* Character Count */
void charCount(char data[]) {
    int count = strlen(data);

    printf("Character Count: %d\n", count);
}

/* Character Stuffing */
void charStuffing(char data[]) {
    char result[200] = "DLESTX";

    for (int i = 0; i < strlen(data); i++) {
        if (data[i] == 'D' && data[i+1] == 'L' && data[i+2] == 'E') {
            strcat(result, "DLE");
        }

        strncat(result, &data[i], 1);
    }

    strcat(result, "DLEETX");

    printf("Character Stuffed: %s\n", result);
}

/* Bit Stuffing */
void bitStuffing(char data[]) {
    char result[200];
    int count = 0, j = 0;

    for (int i = 0; data[i] != '\0'; i++) {
        result[j++] = data[i];

        if (data[i] == '1') {
            count++;

            if (count == 5) {
                result[j++] = '0';
                count = 0;
            }
        } else {
            count = 0;
        }
    }

    result[j] = '\0';

    printf("Bit Stuffed: %s\n", result);
}

int main() {
    char data[100];

    printf("Enter data: ");
    scanf("%s", data);

    charCount(data);
    charStuffing(data);
    bitStuffing(data);

    return 0;
}
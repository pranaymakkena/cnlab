/*
7. Implement data encryption and data decryption.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    int key = 3;

    printf("Enter text: ");
    scanf("%s", text);

    /* Encryption */
    for (int i = 0; i < strlen(text); i++)
        text[i] = text[i] + key;

    printf("Encrypted text: %s\n", text);

    /* Decryption */
    for (int i = 0; i < strlen(text); i++)
        text[i] = text[i] - key;

    printf("Decrypted text: %s\n", text);

    return 0;
}

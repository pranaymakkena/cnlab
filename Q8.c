/*
8. Write a program for congestion control using Leaky bucket algorithm.
*/

#include <stdio.h>

int main() {
    int bucket_size, output_rate, n, i;
    int incoming, stored = 0;

    printf("Enter bucket size: ");
    scanf("%d", &bucket_size);

    printf("Enter output rate: ");
    scanf("%d", &output_rate);

    printf("Enter number of inputs: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter incoming packet size: ");
        scanf("%d", &incoming);

        if (incoming + stored > bucket_size) {
            printf("Overflow! Packet lost\n");
        } else {
            stored += incoming;
        }

        printf("Stored = %d\n", stored);

        stored -= output_rate;
        if (stored < 0) stored = 0;

        printf("After output, stored = %d\n", stored);
    }

    return 0;
}

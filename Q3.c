/*
3. Develop a simple data link layer that performs the flow control using
   the sliding window protocol, and loss recovery using the Go-Back-N mechanism.
*/

#include <stdio.h>

int main() {
    int frames, window, lost, i, j;

    printf("Enter number of frames: ");
    scanf("%d", &frames);

    printf("Enter window size: ");
    scanf("%d", &window);

    printf("Enter frame number to simulate loss: ");
    scanf("%d", &lost);

    printf("\n--- Go-Back-N Sliding Window Simulation ---\n\n");

    i = 0;

    while (i < frames) {
        printf("Sending window: ");

        for (j = i; j < i + window && j < frames; j++) {
            printf("%d ", j);
        }

        printf("\n");

        for (j = i; j < i + window && j < frames; j++) {

            if (j == lost) {
                printf("Frame %d lost!\n", j);
                printf("Negative acknowledgement for frame %d\n", j);
                printf("Go-Back-N: Retransmitting from frame %d\n\n", j);

                /* Retransmit lost frame and remaining frames */
                for (int k = j; k < i + window && k < frames; k++) {
                    printf("Retransmitting frame %d\n", k);
                }

                printf("Acknowledgement received up to frame %d\n\n",
                       (i + window < frames) ? i + window - 1 : frames - 1);

                i += window;
                break;
            } 
            else {
                printf("Frame %d received successfully\n", j);
            }
        }

        if (lost < i || lost >= i + window) {
            printf("Acknowledgement received up to frame %d\n\n",
                   (i + window < frames) ? i + window - 1 : frames - 1);

            i += window;
        }
    }

    printf("Go-Back-N simulation complete.\n");

    return 0;
}
/*
3. Develop a simple data link layer that performs the flow control using
   the sliding window protocol, and loss recovery using the Go-Back-N mechanism.
*/

#include <stdio.h>

int main() {
    int frames, window, i;

    printf("Enter number of frames: ");
    scanf("%d", &frames);

    printf("Enter window size: ");
    scanf("%d", &window);

    for (i = 0; i < frames; i++) {
        printf("Sending frame %d\n", i);

        if (i % window == 0) {
            printf("Acknowledgement received up to frame %d\n", i);
        }
    }

    printf("Go-Back-N simulation complete\n");
    return 0;
}

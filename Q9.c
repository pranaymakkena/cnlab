/*
9. Write a program for frame sorting techniques used in buffers.
*/

#include <stdio.h>

int main() {
    int n, frames[50], temp;

    printf("Enter number of frames: ");
    scanf("%d", &n);

    printf("Enter frame sequence:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &frames[i]);

    /* Sorting (Bubble Sort) */
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (frames[j] > frames[j + 1]) {
                temp = frames[j];
                frames[j] = frames[j + 1];
                frames[j + 1] = temp;
            }

    printf("Sorted frames:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", frames[i]);

    return 0;
}

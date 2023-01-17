#include <stdio.h>

int main() {
    int num[5];
    int i;
    int max = 0, min = 0;

    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }

    max = num[0];
    min = num[0];
    for (i = 1; i < 5; i++) {
        if (num[i] > max) {
            max = num[i];
        }
        if (num[i] < min) {
            min = num[i];
        }
    }

    printf("Largest number: %d\n", max);
    printf("Smallest number: %d\n", min);

    return 0;
}

#include <stdio.h>

int main() {
    int s, e, i, j, isPrime;

    printf("Enter start and end values:\n");
    scanf("%d %d", &s, &e);

    printf("Prime numbers between %d and %d are:\n", s, e);
    for (i = s; i <= e; i++) {
        if (i < 2) continue;
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }

    return 0;
}


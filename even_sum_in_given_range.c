#include <stdio.h>

int main() {
    int s, e, i, sum = 0;
    printf("Enter start and end values: ");
    scanf("%d %d", &s, &e);

    for (i = s; i <= e; i++) {
        if (i % 2 == 0)
            sum += i;
    }

    printf("Sum of even numbers = %d\n", sum);
    return 0;
}


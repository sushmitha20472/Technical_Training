#include <stdio.h>

int main() {
    int s, e, i;
    printf("Enter start and end values: ");
    scanf("%d %d", &s, &e);

    for (i = s; i <= e; i++) {
        if (i % 2 == 0)
            printf("%d ", i);
    }
    return 0;
}


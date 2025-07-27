#include <stdio.h>

int main() {
    int s, e, i;
    printf("Enter start and end values: ");
    scanf("%d %d", &s, &e);

    for (i = s; i <= e; i++) {
        printf("%d ", i);
    }
    return 0;
}


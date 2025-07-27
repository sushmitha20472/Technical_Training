 ****
*
*****
*   *
 ****
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter odd size (>=5): ");
    scanf("%d", &n);
    int mid = (n + 1) / 2;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 && j > 1) // top open
                printf("*");
            else if (i == mid || i == n)
                printf("*");
            else if ((j == 1) || (i > mid && j == n))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}


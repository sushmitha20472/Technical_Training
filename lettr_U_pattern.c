*   *
*   *
*   *
*   *
 ****
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter size (>=5): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if ((j == 1 || j == n) && i != n)
                printf("*");
            else if (i == n && j > 1 && j < n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}


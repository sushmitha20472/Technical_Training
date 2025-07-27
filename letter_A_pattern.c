 *** 
*   *
*****
*   *
*   *
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter odd size (>=5): ");
    scanf("%d", &n);
    int mid = (n + 1) / 2;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 && j > 1 && j < n) // top horizontal line
                printf("*");
            else if (i == mid) // middle horizontal line
                printf("*");
            else if (j == 1 || j == n) // vertical bars
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}


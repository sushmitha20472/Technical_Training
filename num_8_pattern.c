*****
*   *
*****
*   *
*****

#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter odd size (>=5): ");
    scanf("%d", &n);
    int mid = (n + 1) / 2;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 || i == mid || i == n || j == 1 || j == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}



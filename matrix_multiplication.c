#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int m, n, p, q, i, j, k;

    // Input dimensions
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &p, &q);

    // Check if multiplication is possible
    if (n != p) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    // Input matrix A
    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    // Input matrix B
    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            scanf("%d", &b[i][j]);

    // Initialize result matrix C
    for (i = 0; i < m; i++)
        for (j = 0; j < q; j++)
            c[i][j] = 0;

    // Matrix multiplication logic
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Output result matrix
    printf("Resultant Matrix C:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}


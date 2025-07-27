#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, next, count = 2;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("1 term\n");
        return 0;
    }
    while (1) {
        next = t1 + t2;
        if (next >= n) break;
        t1 = t2;
        t2 = next;
        count++;
    }
    printf("Number of terms till it reaches or exceeds %d is %d\n", n, count + 1);
    return 0;
}


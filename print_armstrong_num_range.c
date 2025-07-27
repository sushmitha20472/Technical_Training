#include <stdio.h>
#include <math.h>

int main() {
    int s, e, i, num, rem, n;

    printf("Enter start and end values:\n");
    scanf("%d %d", &s, &e);

    printf("Armstrong numbers between %d and %d are:\n", s, e);
    for (i = s; i <= e; i++) {
        num = i;
        n = 0;
        int temp = num;
        while (temp > 0) {
            temp /= 10;
            n++;
        }

        int sum = 0;
        temp = num;
        while (temp > 0) {
            rem = temp % 10;
            sum += pow(rem, n);
            temp /= 10;
        }

        if (sum == num)
            printf("%d ", num);
    }

    return 0;
}


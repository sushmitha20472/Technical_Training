#include <stdio.h>
#include <ctype.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= n/2; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    char s[100];
    int i, num = 0, count = 0, in_number = 0;

    printf("Enter the string: ");
    scanf("%[^\n]", s);

    for (i = 0; s[i] != '\0'; i++) {
        if (isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');
            in_number = 1;
        } else if (in_number) {
            if (isPrime(num)) {
                printf("%d ", num);
                count++;
            }
            num = 0;
            in_number = 0;
        }
    }
    if (in_number && isPrime(num)) {
        printf("%d ", num);
        count++;
    }

    printf("\nTotal prime numbers = %d\n", count);
    return 0;
}


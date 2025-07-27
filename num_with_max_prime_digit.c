#include <stdio.h>
#include <ctype.h>

int isPrimeDigit(int d) {
    return d == 2 || d == 3 || d == 5 || d == 7;
}

int main() {
    char s[100];
    int i, num = 0, in_number = 0, maxPrimeDigits = 0, result = 0, temp, count;

    printf("Enter the string: ");
    scanf("%[^\n]", s);

    for (i = 0; s[i] != '\0'; i++) {
        if (isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');
            in_number = 1;
        } else if (in_number) {
            temp = num; count = 0;
            while (temp > 0) {
                if (isPrimeDigit(temp % 10)) count++;
                temp /= 10;
            }
            if (count > maxPrimeDigits) {
                maxPrimeDigits = count;
                result = num;
            }
            num = 0;
            in_number = 0;
        }
    }
    if (in_number) {
        temp = num; count = 0;
        while (temp > 0) {
            if (isPrimeDigit(temp % 10)) count++;
            temp /= 10;
        }
        if (count > maxPrimeDigits)
            result = num;
    }

    printf("Number with max prime digits: %d\n", result);
    return 0;
}


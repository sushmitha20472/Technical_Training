#include <stdio.h>
#include <ctype.h>

int isPalindrome(int n) {
    int rev = 0, temp = n;
    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }
    return rev == n;
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
            if (isPalindrome(num)) {
                printf("%d ", num);
                count++;
            }
            num = 0;
            in_number = 0;
        }
    }
    if (in_number && isPalindrome(num)) {
        printf("%d ", num);
        count++;
    }

    printf("\nTotal palindrome numbers = %d\n", count);
    return 0;
}


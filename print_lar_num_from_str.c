#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    int i, num = 0, max = -1, in_number = 0;

    printf("Enter the string: ");
    scanf("%[^\n]", s);

    for (i = 0; s[i] != '\0'; i++) {
        if (isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');
            in_number = 1;
        } else if (in_number) {
            if (num > max)
                max = num;
            num = 0;
            in_number = 0;
        }
    }
    if (in_number && num > max)
        max = num;

    printf("Largest number = %d\n", max);
    return 0;
}


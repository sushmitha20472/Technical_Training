#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main()
{
    char s[100];
    int i, j, sum = 0, n, count = 0,k;

    printf("Enter the input:\n");
    scanf("%[^\n]", s);

    for (i = 0; s[i] != '\0'; i++)
    {
        n = 0;

        if (isdigit(s[i]))
        {
            n = s[i] - '0';

            for (j = i + 1; s[j] != '\0'; j++)
            {
                if (isdigit(s[j]))
                {
                    n = n * 10 + s[j] - '0';
                }
                else
                {
                    break;
                }
            }

            i = j - 1; // Skip processed digits

            count = 0;
            if (n == 1)
                count = 1;

            for(k = 2; k <= sqrt(n); k++)
            {
                if (n % k == 0)
                count++;
            }

            if (count == 0)
                printf("%d is prime\n", n);
            else
                printf("%d is not a prime\n", n);
        }
    }

    return 0;
}


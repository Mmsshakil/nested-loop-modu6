#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x[n];

    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x[i]);
    }

    // main part
    for (int i = 1; i <= n; i++)
    {
        if (x[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (x[i] > 0)
        {
            positive++;
        }
        else if (x[i] < 0)
        {
            negative++;
        }

        // printf("%d\n", x[i]);
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d", negative);

    return 0;
}
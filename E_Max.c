#include <stdio.h>
int main()
{
    int n;
    int x;
    int max = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (max < x)
        {
            max = x;
        }
    }
    printf("%d", max);

    return 0;
}
#include <stdio.h>
int main()
{
    int x = 10, m = 10;
    int y = x++; // post increment
    int n = ++m; // pre increment

    printf("%d %d\n", x, y);
    printf("%d %d", m, n);
    return 0;
}
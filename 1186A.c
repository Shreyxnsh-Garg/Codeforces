#include <stdio.h>

int main()
{
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    if (m / n >= 1 && k / n >= 1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}

#include <stdio.h>
                                                                            //Problem 1186A - Vus the Cossack and the Contest
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

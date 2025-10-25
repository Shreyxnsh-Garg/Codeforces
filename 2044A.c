#include <stdio.h>
                                                                            //Problem 2044A - Easy Problem
int main()
{
    int n, a, b, k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        scanf("%d", &k);
        for (a = 0; a < k; a++)
        {
            for (b = 0; b < k; b++)
            {
                if (a + b == k)
                {
                    count += 1;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}

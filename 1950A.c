#include <stdio.h>
                                                                    //Problem 1950A- Stair,Peak, or Neither
int main()
{
    int n, a, b, c;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {

        scanf("%d%d%d", &a, &b, &c);
        if (a < b && b < c)
        {
            printf("STAIR\n");
        }
        else if (a < b && b > c)
        {
            printf("PEAK\n");
        }
        else
        {
            printf("NONE\n");
        }
    }
    return 0;
}

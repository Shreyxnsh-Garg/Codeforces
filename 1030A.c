#include <stdio.h>
                                                           //Problem 1030A- In Search of an Easy problem
int main()
{
    int n, a, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a == 1)
        {
            count++;
        }
    }
    if (count >= 1)
    {
        printf("HARD");
    }
    else
    {
        printf("EASY");
    }
    return 0;
}

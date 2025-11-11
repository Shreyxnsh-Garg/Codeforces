#include <stdio.h>
                                                                    //Problem 1878A - How Much Does Daytona Cost?
int main()
{
    int t, n, k;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &k);
        int arr[n];
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
            if (k == arr[j])
            {
                count++;
            }
        }
        if (count > 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}

#include <stdio.h>
                                                                            //Problem 1866A - Ambitious Kid
int main()
{
    int n,min;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        
        if (arr[i] < 0)
        {
            arr[i] = -arr[i];
        }
         min = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
                
            }
        }
    }
    printf("%d", min);
    return 0;
}

#include <stdio.h>
                                                                          //Problem 1409A - Yet Another Two Integers Problem
int main()
{
    int t;
    scanf("%d", &t);
 
    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int diff = a - b;
        if (diff < 0)
            diff = -diff;
        int moves = (diff + 9) / 10;
 
        printf("%d\n", moves);
    }
 
    return 0;
}

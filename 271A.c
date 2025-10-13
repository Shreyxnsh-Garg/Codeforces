#include <stdio.h>

int main()
{
    int y;
    scanf("%d", &y);
    int i = y + 1;
    while (i > 0)
    {
        int r = i % 10;
        int a = (i / 10) % 10;
        int b = (i / 100) % 10;
        int c = (i / 1000);
        if (r != a && r != b && r != c && a != b && a != c && b != c)
        {
            printf("%d", i);
            break;
        }
        i++;
    }
    return 0;
}

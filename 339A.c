#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    char temp;
    scanf("%[^\n]", str);
    int l = strlen(str);
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l - 2; j += 2)
        {
            if (str[j] > str[j + 2])
            {
                temp = str[j];
                str[j] = str[j + 2];
                str[j + 2] = temp;
            }
        }
    }
    printf("%s\n", str);

    return 0;
}

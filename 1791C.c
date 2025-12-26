#include <stdio.h>
                                                                                Problem 1791C - Prepend and Append
int main() {
    int t;
    scanf("%d", &t);

    for(int k=0;k<t;k++){
        int n;
        
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);

        int i = 0, j = n - 1;

        while (i < j && s[i] != s[j]) {
            i++;
            j--;
        }

        printf("%d\n", j - i + 1);
    }

    return 0;
}

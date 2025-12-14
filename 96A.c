#include <stdio.h>
#include<string.h>

int main() {
    char str[101];
    scanf("%[^\n]",str);
    int count = 1;
    for (int i = 0; i<strlen(str)-1; i++) {
        if (str[i] == str[i + 1]) {
            count++;
            if (count >= 7) {
                printf("YES");  
                return 0; 
            }
        }
        else {
            count=1;
        }
    }
        printf("NO");
        return 0;
}


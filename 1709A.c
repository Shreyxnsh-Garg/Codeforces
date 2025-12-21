#include <stdio.h>

int main() {
    int t, x;
    int arr[3];

    scanf("%d", &t);

    for(int i=0;i<t;i++) {
        scanf("%d", &x);

        for (int i = 0; i < 3; i++) {
            scanf("%d", &arr[i]);
        }

        if (arr[x - 1] == 0) {
            printf("NO\n");
        }
        else if (arr[x - 1] == 1 && arr[0] == 0) {
            printf("NO\n");
        }
        else if (arr[x - 1] == 2 && arr[1] == 0) {
            printf("NO\n");
        }
        else if (arr[x - 1] == 3 && arr[2] == 0) {
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
    }

    return 0;
}

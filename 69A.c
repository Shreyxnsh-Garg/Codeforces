#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int x, y, z;
    int Ex = 0, Ey = 0, Ez = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d %d %d", &x, &y, &z);
        Ex += x;
        Ey += y;
        Ez += z;
    }

    if(Ex == 0 && Ey == 0 && Ez == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}

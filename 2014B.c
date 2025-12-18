#include <stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n, k;
        scanf("%lld %lld", &n, &k);
        long long start = n - k + 1;
        long long end = n;
 
        long long odd_count = (end + 1) / 2 - (start / 2);
 
        if (odd_count % 2 == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

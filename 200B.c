#include <stdio.h>

int main() {
    int n,p;
    float v=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&p);
        v+=p;
    }
    printf("%f",v/n);
    return 0;
}

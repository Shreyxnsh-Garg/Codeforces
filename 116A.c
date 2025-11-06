#include <stdio.h>
                                                                        //Problem 116A - Tram
int main() {
    int n,a,b,in=0,cap=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d%d",&a,&b);
        if(a<=in)
        in = in-a;
        in = in+b;
        if(in>cap){cap = in;}
    }
    printf("%d",cap);
    return 0;
}

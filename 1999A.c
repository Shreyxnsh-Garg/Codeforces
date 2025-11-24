#include <stdio.h>

int main() {
    int t,n;
    int a,b;
    int sum=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        a=n%10;
        b=n/10;
        sum=a+b;
        printf("%d\n",sum);

        
    }
    return 0;
}

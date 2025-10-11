#include <stdio.h>

int main() {
    int n,k,r;
    scanf("%d%d",&n,&k);

    for(int i=0;i<k;i++){

        r = n%10;
        if(r !=0){n = n-1;}
        else{n=n/10;}
    }
    printf("%d",n);
    return 0;
}

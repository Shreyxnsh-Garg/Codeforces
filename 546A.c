#include <stdio.h>
                                                            //Problem 546A- Soldier and Bananas
int main() {
    int n,k,w,pay=0;
    scanf("%d %d %d",&k,&n,&w);
    for(int i=1;i<=w;i++){
        pay += k*i;
    }

    if(pay <=n ){printf("0");}
    else {printf("%d",pay-n);}
    return 0;
}

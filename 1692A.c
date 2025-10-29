#include <stdio.h>
                                                                        //Problem 1692A - Marathon
int main() {
    int a,b,c,d;
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int count=0;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a<b){count++;}
        if(a<c){count++;}
        if(a<d){count++;}
        printf("%d\n",count);
    }
    return 0;
}

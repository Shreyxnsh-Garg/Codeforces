#include <stdio.h>
                                                                            //Problem 703A - Mishka and Game
int main() {
    int n,m,c,count1=0,count2=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&m,&c);
        if(m>c){count1++;}
        if(c>m){count2++;}
    }
    if(count1>count2){printf("Mishka");}
    if(count2>count1){printf("Chris");}
    if(count1==count2){printf("Friendship is magic!^^");}
    return 0;
}

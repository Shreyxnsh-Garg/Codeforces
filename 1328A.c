#include <stdio.h>
                                                                    //Problem 1328A-Divisibility Problem
int main() {
    int t,a,b;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        if(a%b==0){printf("0\n");}
        else{
       printf("%d\n",b-a%b);
    }
}
    return 0;
}

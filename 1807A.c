#include<stdio.h>
                                                                //Problem 1807A - Plus or Minus
int main(){
    int n,a,b,c;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a+b==c){printf("+\n");}
        if(a-b==c){printf("-\n");}
    }
    return 0;
}

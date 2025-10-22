#include <stdio.h>

int main() {
    int n,h,a,width=0;
    scanf("%d%d",&n,&h);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a>0 && a<=h){width +=1;}
        else{width+=2;}
    }
    printf("%d",width);
    return 0;
}

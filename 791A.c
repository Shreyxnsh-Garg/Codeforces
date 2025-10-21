#include <stdio.h>
                                                        //Problem 791A - Bear and Big Brother
int main() {
    int a,b;
    int years = 0;
    scanf("%d%d",&a,&b);
    
        while(a<b|| a==b){
            a = a*3;
            b = b*2;
            years++;
            if(a>b)break;
        }
        printf("%d",years);
    
    return 0;
}

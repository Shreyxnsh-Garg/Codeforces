#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int a,b;
        scanf("%d %d",&a,&b);

        int max,min;
        if(a>b){
            max = a;
            min = b;
        }
        else{
            max = b;
            min = a;
        }
        int s;
        if(max>2*min)
        {
            s = max;
        }
        else{
            s = min;
        }
        printf("%d\n",s*s);

    }
    return 0;
}

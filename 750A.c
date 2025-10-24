#include <stdio.h>
                                                                    //Problem 750A - New Year and Hurry
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int time=240-k;
    int count = 0;
    for(int i=1;i<=n;i++){
        time = time-5*i;
        if(time>=0)count++;

    }
    printf("%d",count);
    return 0;
}

#include <stdio.h>
                                                                        //Problem 2145A - Candies for Nephews
int main() {
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        if(n%3==0)
        {
          printf("0\n");
        }
        else
        {
          printf("%d\n",3-n%3);
        }
    }
    return 0;
}

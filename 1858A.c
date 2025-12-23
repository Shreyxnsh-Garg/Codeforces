#include <stdio.h>
                                                                                  //Problem 1858A - Buttons
int main() {
    int t,a,b,c;
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        scanf("%d %d %d",&a,&b,&c);

        if(c%2==0){
            if(a>b){printf("First\n");}
            else{printf("Second\n");}
        }

        else{
            if(b>a){printf("Second\n");}
            else{printf("First\n");}
        }

    }
    return 0;
}

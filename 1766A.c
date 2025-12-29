#include <stdio.h>
 
int main(){
    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        int og=n;
        
        if(n>0 && n<10)
        printf("%d\n",n);
        else if(n>9 && n<100){
            og=og/10;
            
            printf("%d\n",9+og);
        }
        else if(n>99 && n<1000){
            og=og/100;
            printf("%d\n",9+9+og);
 
        }
         else if(n>999 && n<10000){
            og=og/1000;
            printf("%d\n",9+9+9+og);
 
        }
         else if(n>9999 && n<100000){
            og=og/10000;
            printf("%d\n",9+9+9+9+og);
 
        }
         else if(n>99999 && n<1000000){
            og=og/100000;
            printf("%d\n",9+9+9+9+9+og);
 
        }
         
    }
    return 0;
}

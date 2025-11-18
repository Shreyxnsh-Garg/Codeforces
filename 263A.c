#include <stdio.h>
 
int main(){
    int i,j,tempa,tempb,req=0,tot;
 
    int swap[5][5];
 
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d", &swap[i][j]);
        }
    }
 
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(swap[i][j] == 1){
                tempa = i;
                tempb = j;
                break;
            }
        }
    }
 
 
    if(tempa<=2) req = 2-tempa;
    else if(tempa>2) req = tempa-2;
    if(tempb<=2) tot = 2-tempb;
    else if(tempb>2) tot = tempb-2;
 
    int final = tot + req;
 
    printf("%d", final);
    
    return 0;
}

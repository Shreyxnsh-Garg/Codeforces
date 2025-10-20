#include <stdio.h>

int main() {
    int r,count=0;
    long long int n;
    scanf("%lld",&n);

    while(n>0){
        r = n%10;
        if(r ==4 || r==7){count +=1;}
        n =n/10;
    }
    if(count == 4 || count == 7){printf("YES");}
    else{printf("NO");}
    
    return 0;
}

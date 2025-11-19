#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int dist=0;
    if((a>b && b>c) || (c>b && b>a)){
        if(c>a){
            dist=(c-a);
        }
        else{
            dist=(a-c);
        }
    }
    if((a>c && c>b)||(b>c && c>a) ){
        if(b>a){
            dist=(b-a);
        }
        else{
            dist=(a-b);
        }
    }
    if((b>a && a>c) || (c>a && a>b)){
        if(c>b){
            dist=(c-b);
        }
        else{
            dist=(b-c);
        }
    }
    printf("%d\n", dist);
    return 0;
}

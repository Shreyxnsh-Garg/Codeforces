#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    char str[10] = "codeforces";
    
    for(int i=0;i<t;i++){
        int count=0;
        char ch;
        scanf(" %c",&ch);
        for(int i=0;i<10;i++){
            if(str[i]==ch){
                count++;
            }
        }
        if(count>0){printf("YES\n");}
        else{printf("NO\n");}
        
    }
    return 0;
}

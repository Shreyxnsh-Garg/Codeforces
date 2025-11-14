#include <stdio.h>
                                                                     //Problem 1624A - Plus One on the subset
int main() {
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        long long int arr[n];
        for(int j=0;j<n;j++){
            scanf("%lld",&arr[j]);
        }
        int max=arr[0];
        int min=arr[0];
        for(int k=0;k<n;k++){
            if(arr[k]>max){max = arr[k];}
            if(arr[k]<min){min = arr[k];}
        }
        printf("%d\n",max-min);
    }
    return 0;
}

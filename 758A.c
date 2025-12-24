#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int max=0;
    long long int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max = arr[i];
        }
    }

    for(int i=0;i<n;i++){
        sum+= (max - arr[i]);
    }
    printf("%lld",sum);
    return 0;
}

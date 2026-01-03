#include <iostream>
#include <algorithm>
using namespace std;
                                                                                //Problem 509A - Maximum in Table
int main() {
    int n;
    cin>>n;
    int max = -1;

    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0){
                arr[i][j]=1;
            }
            else{
                arr[i][j]=arr[i-1][j] + arr[i][j-1];
            }
            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
    }
    cout<<max<<endl;
    return 0;
}

#include <iostream>
#include <algorithm>
                                                                                        //Problem 1829B - Blank Space
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        int arr[n];
        int count = 0,maxCount=0;
        for(int j=0;j<n;j++){
            cin>>arr[j];
            if(arr[j] == 0){
                count++;
                if(count > maxCount){
                    maxCount = count;
                }
            }
            if(arr[j] != 0){
                count = 0;
            }
        }
        cout<<maxCount<<endl;
    }
    return 0;
}

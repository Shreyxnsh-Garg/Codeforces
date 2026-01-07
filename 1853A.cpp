#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }

        if(is_sorted(arr,arr+n)){
            int diff = arr[1]-arr[0];
            for(int j=0;j<n-1;j++){
                if(arr[j+1]-arr[j]<diff){
                    diff = arr[j+1]-arr[j];
                }
            }
            cout<<diff/2+1<<endl;
        }

        else{
            cout<<0<<endl;
        }

    }

    return 0;
}

#include <iostream>
#include <algorithm>
                                                                                    //Problem 1857A - Array Coloring
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

        int odd_count=0;
        for(int j=0;j<n;j++){
            if(arr[j]%2 !=0){
                odd_count++;
            }
        }

        if(odd_count%2==0){
            cout<<"YES"<<endl;   
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

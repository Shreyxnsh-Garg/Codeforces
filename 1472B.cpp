#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        int sum=0;
        int ones=0;
        for(int j = 0;j<n;j++){
            int x;
            cin>>x;

            sum+=x;
            if(x==1){
                ones++;
            }

        }
        if(sum%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            if(ones>0 || sum%4==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
        
    return 0;
}

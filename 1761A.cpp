#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        int n,a,b;
        cin>>n>>a>>b;
        if(n==a && n==b)
        cout<<"YES\n";
        else{
        if(a+b<=n-2)
        cout<<"YES\n";
        else
        cout<<"NO\n";}
    }
    return 0;
}

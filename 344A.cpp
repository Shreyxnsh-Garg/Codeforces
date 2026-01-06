#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin>>n;

    char second;
    int groups = 0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;

        if(i==0 || s[1]!= second){
            groups++;
            second = s[1];
        }

    }

    cout<<groups;
    return 0;
}

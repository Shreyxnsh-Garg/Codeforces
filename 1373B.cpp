#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        
        int len = s.length();
        int count0 = 0,count1 = 0;
        for(int j=0;j<len;j++){
            if(s[j]== '0'){
                count0++; 
            }
            else{
                count1++;
            }
        }

        int minCount = min(count0,count1);

        if(minCount % 2 == 0){
            cout << "NET" << endl;
        }
        else{
            cout << "DA" << endl;
        }
    }
    return 0;
}

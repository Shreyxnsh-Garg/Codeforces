#include <iostream>
using namespace std;
                                                       //Problem 1840A - Cipher Shifer
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        
        string ans = "";
        int i = 0;
        
        while(i < n) {
            ans += s[i];
            int j = i + 1;
            while(j < n && s[j] != s[i]) {
                j++;
            }
            i = j + 1;
        }
        
        cout << ans << endl;
    }
    return 0;
}

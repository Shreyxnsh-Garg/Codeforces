#include <iostream>
                                                                                             //Problem 1374B - Multiply by 2, divide by 6
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long n;
        cin >> n;
        int moves = 0;
        while (n > 1)
        {
            if (n % 6 == 0)
                n /= 6;
            else if (n % 3 == 0)
                n *= 2;
            else
            {
                moves = -1;
                break;
            }
            moves++;
        }
        cout << moves << '\n';
    }
}

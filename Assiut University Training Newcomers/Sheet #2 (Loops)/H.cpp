#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    long long x, i, m;
    bool test = false;
    cin >> x;
    m = x / 2;
    for (i = 2; i <= m; i++)
    {
        if (x % i == 0)
        {
            cout << "NO" << endl;
            test = true;
            break;
        }
    }

    if (test == false)
        cout << "YES" << endl;

    return 0;
}
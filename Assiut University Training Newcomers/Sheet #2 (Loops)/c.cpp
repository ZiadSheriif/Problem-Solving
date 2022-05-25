#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    long long n, i, x, ev = 0, odd = 0, p = 0, ne = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> x;

        if (x % 2 == 0 || x == 0)

            ev++;

        else
            odd++;

        if (x > 0)
            p++;
        else if (x != 0)
            ne++;
    }
    cout << "Even: " << ev << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << p << endl;
    cout << "Negative: " << ne << endl;
}
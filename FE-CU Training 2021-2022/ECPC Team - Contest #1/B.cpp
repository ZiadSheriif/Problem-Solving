#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long x;
    while (n--)
    {
        cin >> x;
        for (long long i = 1; i <= x; i++)
        {
            if (i * (i + 1) == 2 * x)
            {
                cout << i << endl;
                break;
            }
            else if (i * (i + 1) > 2 * x)
            {
                cout << i - 1 << endl;
                break;
            }
        }
    }
    return 0;
}

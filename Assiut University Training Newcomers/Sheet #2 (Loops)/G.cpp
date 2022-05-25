#include <iostream>
using namespace std;
int main()
{
    long long n, i, x, f, j;

    cin >> n;
    for (j = 1; j <= n; j++)
    {
        cin >> x;
        f = 1;
        for (i = 1; i <= x; i++)
            f *= i;
        cout << f << endl;
    }
}
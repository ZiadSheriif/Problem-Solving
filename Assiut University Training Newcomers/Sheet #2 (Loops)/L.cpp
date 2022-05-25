#include <iostream>
using namespace std;
int main()
{
    int a, b, i, n;
    cin >> a >> b;
    if (a >= b)
        for (i = a; i <= a; i--)
        {

            if (a % i == 0 && b % i == 0)
            {
                cout << i << endl;
                break;
            }
            else
                continue;
        }

    else if (a < b)
        for (i = b; i <= b; i--)
        {
            if (b % i == 0 && a % i == 0)
            {
                cout << i << endl;
                break;
            }
            else
                continue;
        }
}
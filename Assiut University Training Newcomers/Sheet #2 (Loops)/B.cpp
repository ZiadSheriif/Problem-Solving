#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    for (int i = 1; i <= n; i++)

        if (i % 2 == 0)

            cout << i << endl;

        else if (n == 1)
            cout << -1 << endl;
        else
            cout << "";
}

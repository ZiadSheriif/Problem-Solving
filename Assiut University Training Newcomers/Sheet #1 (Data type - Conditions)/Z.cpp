#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    long double a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b * log(a) > d * log(c))

        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

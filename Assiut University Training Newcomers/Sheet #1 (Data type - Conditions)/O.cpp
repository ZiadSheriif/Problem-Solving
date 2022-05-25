#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    long long x, y;
    char s;
    cin >> x >> s >> y;
    if (s == '+')
        cout << x + y << endl;
    else if (s == '-')
        cout << x - y << endl;
    else if (s == '*')
        cout << x * y << endl;
    else
        cout << x / y << endl;
}

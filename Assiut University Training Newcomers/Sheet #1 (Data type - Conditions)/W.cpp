#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    long long a, b, c;
    long long sum = 0, multi = 0, mis = 0;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    if (s == '+')
    {
        sum += (a + b);
        if (sum == c)
            cout << "Yes" << endl;
        else
            cout << sum << endl;
    }
    if (s == '-')
    {
        mis += (a - b);
        if (mis == c)
            cout << "Yes" << endl;
        else
            cout << mis << endl;
    }
    if (s == '*')
    {
        multi += (a * b);
        if (multi == c)
            cout << "Yes" << endl;
        else
            cout << multi << endl;
    }
}

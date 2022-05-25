#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    long long x, r, s = 0, temp;
    cin >> x;
    temp = x;
    while (x > 0)
    {
        r = x % 10;
        s = s * 10 + r;
        x /= 10;
    }
    if (s == temp)
    {
        cout << s << endl;
        cout << "YES" << endl;
    }
    else
    {
        cout << s << endl;
        cout << "NO" << endl;
    }
}
#include <iostream>
using namespace std;
string solve()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == b && b == c && c == d)
        return "YES";
    return "NO";
}
int main()
{
    cout << solve();
}
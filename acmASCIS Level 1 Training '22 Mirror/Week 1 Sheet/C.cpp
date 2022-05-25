#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
#include <string>
#include <map>
#include <set>
#include <limits.h>
#include <iomanip>

using namespace std;

#include <string>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<double> vd;
typedef vector<vi> vvi;
typedef vector<string> vs;
#define rep(i, v) for (int i = 0; i < v.size(); ++i)

#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define M_PI 3.14159265358979323846
ll n, a, b, c, x, y;
string s;
int solve()
{
    cin >> s;
    a = s[0] - '0';
    b = s[2] - '0';
    c = s[4] - '0';
    if (s[1] == '+')
    {
        if (a + b == c)
        {
        }
        return 1;
        x = a + b;
    }
    else if (s[1] == '-')
    {
        if (a - b == c)
            return 1;
        x = a - b;
    }
    else
    {
        if (a * b == c)
            return 1;
        x = a * b;
    }
    return 0;
}
int main()
{
    fast;
    cout << solve();
}
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
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
ll n, x, y, a, b, c, d, s, r, k, w, m, t;
double o;
string S;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
void solve()
{
}

int main()
{
    fast;
    cin >> n;
    stack<char> stemp;
    char letter;
    cin >> letter;
    stemp.push(letter);
    n--;
    while (n--)
    {
        cin >> letter;
        if (letter != stemp.top())
        {
            stemp.push(letter);
        }
    }
    cin >> m;
    while (m--)
    {
        cin >> letter;
        if (letter != stemp.top())
        {
            stemp.push(letter);
        }
        cout << stemp.size() << "\n";
    }
}

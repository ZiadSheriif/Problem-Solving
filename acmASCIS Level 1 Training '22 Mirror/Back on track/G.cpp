

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

int main()
{
    fast;
    int aa = 0, bb = 0, cc = 0;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        x = max(max(a, b), c);
        if (a != x)
            aa = (x - a) + 1;
        else if (a == b || a == c)
            aa = 1;
        else
            aa = 0;
        if (b != x)
            bb = (x - b) + 1;
        else if (b == a || b == c)
            bb = 1;
        else
            bb = 0;
        if (c != x)
            cc = (x - c) + 1;
        else if (c == a || c == b)
            cc = 1;
        else
            cc = 0;
        cout << aa << " " << bb << " " << cc << endl;
    }
}
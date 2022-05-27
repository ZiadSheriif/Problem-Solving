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
    cin >> n;
    vll tops(n);
    cin >> x;
    tops[0] = x;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        tops[i] = tops[i - 1] + x;
    }
    cin >> t;
    while (t--)
    {
        cin >> a;
        if (a == 1)
        {
            cin >> b >> c;
            if (b != 1)
                cout << tops[c - 1] - tops[b - 2] << "\n";
            else
                cout << tops[c - 1] << "\n";
        }
        else if (a == 2)
        {
            cin >> x;
            tops.push_back(x + tops[tops.size() - 1]);
        }
        else
            tops.pop_back();
    }
}

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
    string S1;
    map<string, string> Networks;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a >> S >> S1;
        if (Networks.find(S1) == Networks.end())
            Networks.insert({S1, S});
        else
            Networks[S1] = S;

        if (a == 2)
            if (Networks.find(S) == Networks.end())
                Networks.insert({S, S1});
            else
                Networks[S] = S1;
    }
    cin >> t;
    while (t--)
    {
        cin >> S;
        cout << Networks[S] << "\n";
    }
}

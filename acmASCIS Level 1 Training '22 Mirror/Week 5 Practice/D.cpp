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
typedef vector<pair<ll, ll>> vpll;
typedef pair<int, int> pi;
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

bool sortbyCond(const pair<ll, ll> &a,
                const pair<ll, ll> &b)
{
    if (a.first != b.first)
        return (a.first < b.first);
    else
        return a.second > b.second;
}

bool sortStrPair(pair<string, pair<ll, ll>> &a, pair<string, pair<ll, ll>> &b)
{
    if (a.second.first != b.second.first)
        return (a.second.first < b.second.first);
    else
        return a.second.second > b.second.second;
}

int main()
{
    fast;
    cin >> n >> m;
    vector<pair<string, pair<ll, ll>>> Keys(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> S >> a >> b;
        Keys[i] = {S, {b, a}};
    }
    if (m == 0)
    {
        cout << 0;
        exit(0);
    }
    sort(Keys.begin(), Keys.end(), sortStrPair);
    vector<string> finalStr;
    ll cnt = 0;
    for (auto it : Keys)
    {
        if (it.second.first <= m)
        {
            cnt += it.second.second;
            m -= it.second.first;
            finalStr.push_back(it.first);
        }
    }
    cout << cnt << "\n";
    for (auto str : finalStr)
        cout << str << " ";
}
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
typedef vector<pair<int, int>> vpi;
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

bool primeTest(ll n)
{

    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    fast;
    string t;
    cin >> n >> m;
    vvi BW(n, vector<int>(m, 0));
    set<pair<int, int>> mySet;
    vpi vec;
    for (int i = 0; i < n; ++i)
    {
        cin >> t;
        for (int j = 0; j < m; ++j)
        {
            if (t[j] == 'B')
                BW[i][j] = 1;
            else
                vec.push_back({i, j});
        }
        if (vec.size() == m)
        {
            for (auto it : vec)
                mySet.insert(it);
        }
        vec.clear();
    }
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (BW[j][i] == 0)
                vec.push_back({j, i});
            else
                break;
        }
        if (vec.size() == n)
        {
            for (auto it : vec)
                mySet.insert(it);
        }
    }
    cout << (n * m) - mySet.size();
}
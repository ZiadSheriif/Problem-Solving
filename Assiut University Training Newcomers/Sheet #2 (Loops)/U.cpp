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
typedef unsigned long long usll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<pair<ll, ll>> vpll;
typedef vector<pair<int, int>> vpi;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<double> vd;
typedef vector<vi> vvi;
typedef vector<vll> vvl;

typedef vector<string> vs;
#define rep(i, v) for (int i = 0; i < v.size(); ++i)
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define M_PI 3.14159265358979323846
ll n, t, c;
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

usll factorial(usll n)
{
    if (n == 0)
        return 1;
    c = n;
    for (int i = n - 1; i > 1; i--)
        c *= i;
    return c;
}

bool sortbyCond(const pair<ll, ll> &a, const pair<ll, ll> &b)
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

bool sortChar(pair<char, ll> &a, pair<char, ll> &b)
{
    if (a.second != b.second)
        return (a.second > b.second);
    else
        return a.first > b.first;
}

bool primeTest(ll n)
{

    bool flag = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (n <= 1)
        flag = false;
    if (flag == 1)
        return true;
    return false;
}

ll nearestPrimeNumber(ll n)
{
    if (n & 1)
        n -= 2;
    else
        n--;
    int i, j;
    for (i = n; i >= 2; i -= 2)
    {
        if (i % 2 == 0)
            continue;
        for (j = 3; j * j <= i; j += 2)
        {
            if (i % j == 0)
                break;
        }
        if (j * j > i)
            return i;
    }
    return 2;
}

void solve()
{
    ll a, b;
    cin >> n >> a >> b;
    ll cnt, sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        cnt = 0;
        ll temp = i;
        while (temp > 0)
        {
            cnt += temp % 10;
            temp /= 10;
        }
        if (cnt >= a && cnt <= b)
        {
            sum += i;
        }
    }
    cout << sum;
}

int main()
{
    fast;
    //    cin >> t;
    t = 1;
    while (t--)
        solve();
}

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

ll gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(long long a, long long b)
{
    return (a / gcd(a, b)) * b;
}
ll a, b, c, x, y, n;
int main()
{
    cin >> n >> a >> b >> x >> y;
    ll ca = 0, cb = 0;
    ca = n / a; // 10
    cb = n / b; // 6
    k = lcm(a, b);
    c = n / k;
    ca -= c;
    cb -= c;
    ca *= x;
    cb *= y;
    cout << (ca + cb + (c * max(x, y)));
    return 0;
}
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
void books()
{
    cin >> n;
    stack<int> S;
    vi vec;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        if (x == 1)
        {
            cin >> y;
            S.push(y);
        }
        else if (!S.empty())
        {
            if (x == 2)
                S.pop();
            else
                vec.push_back(S.top());
        }
    }
    for (int i = 0; i < vec.size(); ++i)
    {

        cout << vec[i] << "\n";
    }
}

int main()
{
    fast;
    books();
}

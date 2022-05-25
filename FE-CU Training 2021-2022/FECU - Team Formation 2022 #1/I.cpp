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
ll n, x, y, a, b, c, d, s, r, k, w, m;
double o, t;
string ss;
bool test = false;

long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to return LCM of two numbers
long long lcm(long long a, long long b)
{
    return (a / gcd(a, b)) * b;
}

void Ahmed_and_House()
{
    ll a1, a2, b1, b2;
    cin >> x >> y;
    cin >> a1 >> b1 >> a2 >> b2;

    if (x >= a1 + a2 && y >= max(b1, b2))
        cout << "YES";
    else if (x >= a1 + b2 && y >= max(b1, a2))
        cout << "YES";
    else if (x >= b1 + a2 && y >= max(a1, b2))
        cout << "YES";
    else if (x >= b1 + b2 && y >= max(a1, a2))
        cout << "YES";
    else if (x >= max(a1, a2) && y >= b1 + b2)
        cout << "YES";
    else if (x >= max(a1, b2) && y >= a2 + b1)
        cout << "YES";
    else if (x >= max(b1, b2) && y >= a1 + a2)
        cout << "YES";
    else if (x >= max(b1, a2) && y >= b2 + a1)
        cout << "YES";
    else
        cout << "NO";
}
int main()
{
    fast;
    Ahmed_and_House();
    return 0;
}
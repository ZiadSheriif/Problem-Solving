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

int main()
{
    int x[100], k, n, i, j, c = 0;
    cin >> n >> k;
    for (i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (i = 0; i < n; i++)
    {
        if (x[i] >= x[k - 1] && x[i] > 0)
            c++;
    }
    cout << c << endl;
    return 0;
}
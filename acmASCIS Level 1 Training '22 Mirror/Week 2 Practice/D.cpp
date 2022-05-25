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

long long lcm(long long a, long long b)
{
    return (a / gcd(a, b)) * b;
}

void World_War_III()
{
    bool test = true;
    int first = 0, last = 0, count = 0;
    cin >> n >> r;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (test && a == r)
        {
            first = i;
            test = false;
            last = i;
            count++;
        }
        else if (a == r)
        {
            last = i;
            count++;
        }
    }
    if (first == 0)
    {
        cout << -1;
        return;
    }
    cout << first << " " << last << " " << count;
}
int main()
{
    fast;
    World_War_III();
}
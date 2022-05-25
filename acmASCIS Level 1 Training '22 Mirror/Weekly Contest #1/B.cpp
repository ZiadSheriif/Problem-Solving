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
ll a, b, c, d, x, y, r, s;

string solve(vector<pair<ll, ll>> &v)
{
    sort(v.begin(), v.end());
    if (v[1].second == 1)
        return "Bedo";
    else if (v[1].second == 2)
        return "Omar";
    else
        return "Tarek";
}
int main()
{
    cin >> a >> b >> c;
    vector<pair<long long, long long>> vec(3);
    vec[0] = {a, 1};
    vec[1] = {b, 2};
    vec[2] = {c, 3};
    cout << solve(vec);
    return 0;
}
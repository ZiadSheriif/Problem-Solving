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

oid Scheduling()
{
    vector<string> SS(3);
    for (int i = 0; i < 3; i++)
        cin >> SS[i];
    char S[10];
    int val1, val2, res;
    S[2] = ':';
    S[3] = SS[1][0];
    S[4] = SS[1][1];
    val1 = SS[0][0] - '0';
    val2 = SS[0][1] - '0';
    res = val1 * 10 + val2;
    if (SS[2][0] == 'P')
    {
        if (res != 12)
            res += 12;
    }
    else
    {
        if (res == 12)
            res -= 12;
    }
    S[0] = res / 10 + '0';
    S[1] = res % 10 + '0';
    cout << S;
}

int main()
{
    fast;
    Scheduling();
    return 0;
}
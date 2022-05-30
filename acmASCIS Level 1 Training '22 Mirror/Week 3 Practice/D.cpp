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
ll n, x, a, b, c, d;
string ss;

void Checker()
{
    cin >> n;
    cin >> ss;
    bool test = true;
    if ((ss[n - 1] - '0') % 2 == 0)
    {
        for (int i = 0; i < n; i++)
            if ((ss[i] - '0') % 3 != 0 || (ss[i] - '0') == 0)
            {
                test = false;
                break;
            }
    }
    if (!test || (ss[n - 1] - '0') % 2 != 0)
        cout << "NO";
    else
        cout << "YES";
}

int main()
{
    test;
    Checker();
}

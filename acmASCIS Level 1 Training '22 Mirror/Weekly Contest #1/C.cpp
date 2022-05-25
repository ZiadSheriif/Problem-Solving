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
string ss;

string LookCarefully()
{
    cin >> ss;
    for (int i = 0; i < ss.size(); i++)
        if (ss[i] == 'C' || ss[i] == 'h' || ss[i] == 'i')
            return "Yes";
    return "No";
}
int main()
{

    cout << LookCarefully();
    return 0;
}
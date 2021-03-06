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
void Hazoma()
{
    cin >> n;
    ll hazem = 0, khaled = 0, hossam = 0;
    ll turn = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (turn == 1)
            hazem += x;
        else if (turn == 2)
            khaled += x;
        else
            hossam += x;
        if (turn % 3 == 0)
        {
            turn = 1;
            continue;
        }
        turn++;
    }
    ll maxNum = LONG_LONG_MIN;
    if (hossam == khaled && khaled == hazem)
        cout << "Draw";
    else
    {
        if ((hazem > khaled && hazem > hossam) || hossam == khaled)
            cout << "Hazoma";
        else if ((hazem < khaled && khaled > hossam) || hossam == hazem)
            cout << "Khaled";
        else
            cout << "Hossam";
    }
}

int main()
{
    fast;
    Hazoma();
}
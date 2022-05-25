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
    fast;
    cin >> ss;
    int j = ss.size() - 1;
    int z = 0;
    int sizee = ss.size();
    vector<string> vec(sizee, "1");
    int i;
    for (i = 0; i < (sizee + 1) / 4; i++)
    {
        vec[i] = ss[i];
        vec[j] = ss[i];
        j--;
    }
    int k = i;
    for (int z = j; z >= i; z--)
    {
        vec[z] = ss[z];
        vec[k] = ss[z];
        k++;
        if (k == z + 1)
            break;
    }
    for (int i = 0; i < sizee; i++)
        cout << vec[i];
}
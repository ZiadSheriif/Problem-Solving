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

void removeSpaces(string &str)
{
    int n = str.length();
    int i = 0, j = -1;
    bool spaceFound = false;
    while (++j < n && str[j] == ' ')
        ;
    while (j <= n)
    {
        if (str[j] != ' ')
        {
            if ((str[j] == '.' || str[j] == ',' ||
                 str[j] == '?') &&
                i - 1 >= 0 &&
                str[i - 1] == ' ')
                str[i - 1] = str[j++];

            else
                str[i++] = str[j++];
            spaceFound = false;
        }
        else if (str[j++] == ' ')
        {
            if (!spaceFound)
            {
                str[i++] = ' ';
                spaceFound = true;
            }
        }
    }
    if (i <= 1)
        str.erase(str.begin() + i, str.end());
    else
        str.erase(str.begin() + i - 1, str.end());
}
void Dubstep()
{
    string s, S2 = "   ";
    cin >> s;
    int i;
    while ((i = s.find("WUB")) != string::npos)
        s.replace(i, S2.length(), S2);
    removeSpaces(s);
    cout << s;
}
int main()
{
    Dubstep();
}